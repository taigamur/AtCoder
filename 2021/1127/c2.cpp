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

    int N,W;
    cin >> N >> W;

    vector<pair<ll,ll>> list(N);
    rep(i,0,N){
        pair<ll,ll> p;
        cin >> p.first >> p.second;
        p.first *= -1;
        list[i] = p;
    }
    sort(list.begin(),list.end());

    ll sum = 0;
    ll ans = 0;
    rep(i,0,N){
        if(sum + list[i].second <= W){
            ans += list[i].first * -1 * list[i].second;
            sum += list[i].second;
        }else{
            ans += list[i].first * -1 * (W - sum);
            break;
        }
    }
    cout << ans << endl;
}