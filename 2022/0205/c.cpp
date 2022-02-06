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

ll calc(ll x){
    ll ans = 0;
    while(x >= 10){
        x = x / 10;
        ans++;
    }
    return ans;
}

int main(){
    

    ll N;
    cin >> N;
    ll ans = 0;
    
    ll t = calc(N);
    ll p = pow(10,N);
    ll q = N % p;

    rep(i,1,q){
        ans += i;
        ans = ans % 998244353;
    }

    ll ans2 = 0;
    rep(i,1,p){
        ans2 += i;
        ans2 = ans2 % 998244353;
    }
    ans2 = ans2 * (q-1);






    


    cout << ans << endl;
}