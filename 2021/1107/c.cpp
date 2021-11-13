#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <cmath>

using namespace std;

typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){
    int N;
    cin >> N;

    vector<vector<ll>> list(N+1,vector<ll>());
    rep(i,0,N-1){
        ll T;
        cin >> T;
        list[i].push_back(T);
        ll K;
        cin >> K;
        list[i].push_back(K);
        if(K != 0){
            rep(j,0,K){
                ll a;
                cin >> a;
                list[i].push_back(a);
            }
        }
    }

    unsigned long long ans = 0;
    ll t;
    cin >> t;
    ans += t;


    vector<bool> tf(N+1,false);
    queue<int> que;

    tf[N-1] = true;

    ll K;
    cin >> K;
    
    rep(i,0,K){
        ll a;
        cin >> a;
        que.push(a-1);
    }

    while(!que.empty()){
        ll a = que.front();
        que.pop();
        ans += list[a][0];
        tf[a] = true;
        if(list[a][1] != 0){
            rep(j,0,list[a][1]){
                ll b = list[a][j+2];
                if(!tf[b-1]){
                    tf[b-1] = true;
                    que.push(b-1);
                }
            }
        }
    }

    cout << ans << endl;
}