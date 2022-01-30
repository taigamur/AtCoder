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
    ll N;
    cin >> N;
    vector<ll> H(N);
    rep(i,0,N) cin >> H[i];

    ll ans = H[0]; 
    rep(i,0,N-1){
        if(ans < H[i+1]){
            ans = H[i+1];
        }else{
            cout << ans << endl;
            return 0;
        }
    }
    cout << ans << endl;

}