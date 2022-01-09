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


int main(){
    int N,K;
    cin >> N >> K;
    vector<ll> P(N);
    rep(i,0,N) cin >> P[i];
    set<ll> Set;

    rep(i,0,K) Set.insert(P[i]);

    auto itr = Set.end();
    itr--;
    for(int i = 1; i < K; i++){
        itr--;
    }
    cout << *itr << endl;
    ll ans = *itr;

    for(int i = K; i < N; i++){
        ll p = P[i];
        if(ans > p){
            cout << ans << endl;
        }else{
            Set.insert(p);
            itr++;
            ans = *itr;
            cout << ans << endl;
        }
    }

}