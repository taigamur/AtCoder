#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <cmath>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

ll myPow(ll x, ll n, ll m){
  if(n == 0)
    return 1;
  if(n % 2 == 0)
    return myPow(x * x % m, n / 2, m);
  else
    return x * myPow(x, n - 1, m) % m;
}

int main(){
    ll N,K,M;
    cin >> N >> K >> M;

    ll m = 998244353;

    ull ans1;
    ull ans2;
    ull ans = 0;


    ans1 = myPow(K, N, m);
    ans2 = myPow(K, M, m);

    // ans = (ans1 * ans2) % m;
    if(ans1 > ans2){
        ll t = ans1;
        ans1 = ans2;
        ans2 = t;
    }
    for(ll i=0; i < ans1;i++){
        ans += ans2 % m;
    }
    ans = ans % m;

    cout << ans << endl;


}