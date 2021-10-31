#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

//UnionFind
struct UnionFind{
    vector<int> par,siz,son;

    //初期化
    UnionFind(int n) : par(n,-1),siz(n,1),son(n,-1){}
    //根を求める
    int root(int x){
        if(par[x] == -1) return x;
        else return par[x] = root(par[x]);
    }
    //x,yが同じグループかどうか
    bool issame(int x, int y){
        return root(x) == root(y);
    }
    //xを含むグループとyを含むグループを合併
    bool unite(int x, int y){
        //yをxの子とする
        par[y] = x;
        son[x]= y;
        siz[x] = siz[y] + 1;
        return true;
    }

    bool split(int x, int y){
        par[y] = -1;
        son[x] = -1;
        siz[x] = 1;

        return true;
    }

    bool output(int x){
        vector<int> list;
        int r = root(x);
        while(r != -1){
            list.push_back(r);
            r = son[r];
        }
        if(list.size() == 0){
            cout << 0 << endl;
        }else{
            cout << list.size() << " ";
            for(int i = 0; i < (int)list.size()-1; i++){
                cout << list[i] << " ";
            }

            cout << list[list.size()-1] << endl;
        }
        return true;
    }
    //xを含むグループのサイズ
    // int size(int x){
    //     return siz[root(x)];
    // }
};

int main(){

    int N,Q;
    cin >> N >> Q;

    UnionFind uf(N+1);

    rep(i,0,Q){
        int a,b,c;
        cin >> a;
        if(a == 1){
            cin >> b >> c;
            uf.unite(b,c);
        }else if(a == 2){
            cin >> b >> c;
            uf.split(b,c);
        }else{
            cin >> b;
            uf.output(b);
        }
    }
}