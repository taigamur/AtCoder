#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <map>
#include <math.h>
#include <iomanip>
#include <limits>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;

int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
static const int MAX = 100005;
#define SIZE 10005

struct Node{
    int right, left, parent;
};
// struct Node node[SIZE];

struct UnionFind{
    vector<int> par,siz;

    //初期化
    UnionFind(int n) : par(n,-1),siz(n,1){}
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
        x = root(x);
        y = root(y);
        if(x == y) return false;
        //union by size (y側のサイズが小さくなるように)
        if(siz[x] < siz[y]) swap(x,y);
        //yをxの子とする
        par[y] = x;
        siz[x] += siz[y];
        return true;
    }
    //xを含むグループのサイズ
    int size(int x){
        return siz[root(x)];
    }
};

int main(){
    int N;
    cin >> N;

    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    vector<pair<ll,ll>> P;
    vector<ll> R;

    UnionFind uf(N);

    rep(i,0,N){
        pair<ll,ll> p;
        ll r;
        cin >> p.first >> p.second >> r;
        P.push_back(p);
        R.push_back(r);
    }

    vi A; //始点
    vi B; // 終点
    rep(i,0,N){
        rep(j,i+1,N){
            ll dd = (P[i].first - P[j].first) * (P[i].first - P[j].first) + (P[i].second - P[j].second) * (P[i].second - P[j].second);
            long double dist = sqrt(dd);


            if(P[i].first == P[j].first && P[i].second == P[j].second){
                if(R[i] == R[j]){
                    uf.unite(i,j);
                }
            }else{
                if( ( R[i] + R[j] >= dist && R[i] <= dist + R[j]) || (R[i] + R[j] >= dist && R[j] <= dist + R[i]) ){
                    uf.unite(i,j);
                }
            }

        }
        ll d1 = (P[i].first - a) * (P[i].first - a) + (P[i].second - b) * (P[i].second - b);
        ll d2 = (P[i].first - c) * (P[i].first - c) + (P[i].second - d) * (P[i].second - d);
        if( d1 == R[i]*R[i]) A.push_back(i);
        if( d2 == R[i]*R[i]) B.push_back(i);
    }

    rep(i,0,A.size()){
        rep(j,0,B.size()){
            if(uf.issame(A[i],B[j])){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;


}