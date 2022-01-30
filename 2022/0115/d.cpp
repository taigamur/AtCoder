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

ll get_size(ll n){
    ll ans = 0;
    while(n > 0){
        n = n / 10;
        ans++;
    }
    return ans;
}

ll calc(ll n){
    if(n % 10 == 0 || n < 10){
        return -1;
    }else{
        ll a = get_size(n);
        ll b = n % 10;
        ll ans = n / 10;
        ans += b * pow(10,a-1);
        return ans;
    }
}

int main(){

    ll a;
    cin >> a;
    ll N;
    cin >> N;

    ll x = 1;

    ll M = get_size(N);

    queue<ll> Q;
    Q.push(x);

    map<ll,ll> mp;
    mp[1] = 0;

    ll cnt = 1;    
    ll ans;


    ans = 1 * a;
    if(get_size(ans) <= M){
        Q.push(ans);
        mp[ans] = cnt;
    }

    while(!Q.empty()){
        ll n = Q.front();
        Q.pop();

        ans = n * a;
        // cout << ans << endl;
        if(ans == N){
            cout << mp[n]+1 << endl;
            return 0;
        }
        if(get_size(ans) <= M){
            Q.push(ans);
            if(mp.count(ans) != 1) mp[ans] = mp[n]+1;
        }


        ans = calc(n);
        
        if(ans != -1){
            // cout << ans << endl;
            if(ans == N){
                cout << mp[n]+1 << endl;
                return 0;
            }
            if(mp.count(ans) != 1){
                mp[ans] = mp[n]+1;
                Q.push(ans);
            }
        }


    }
    cout << -1 << endl;

}