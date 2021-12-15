#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>

using namespace std;

typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


//Union-Find
struct UnionFind{
    vector<ll> par,siz;
    //par 各頂点の親頂点の番号を表す　自身が根の場合は　-1
    //siz　各頂点の属する根つき木の頂点数を表す

    //初期化
    UnionFind(ll n) : par(n,-1) , siz(n,0){}//vectorの初期化？？

    //根を求める
    ll root(ll x){
        if(par[x] == -1){
            return x;
        }else{
            return par[x] = root(par[x]);//再帰関数
        }
    }
    
    //x,yが同じグループに属するかどうか(根が一致するかどうか)
    bool issame(ll x,ll y){
        return root(x) == root(y);
    }

    //xを含むグループと yを含むグループを併合する
    bool unite(ll x,ll y){
        siz[x]++;
        siz[y]++;
        x = root(x);
        y = root(y);

        if(x > y){
            swap(x,y);
        }
 
        par[x] = y; //親

        return true;
    }

    ll size(ll x){
        return siz[x];
    }

};

int main(){

    ll N,M;
    cin >> N >> M;

    UnionFind uf(N);
    for(int i = 0; i < M; i++){
        ll a,b;
        cin >> a >> b;
        a--;
        b--;

        if(!uf.issame(a,b) && uf.size(a) < 2 && uf.size(b) < 2){
            uf.unite(a,b);
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;


}