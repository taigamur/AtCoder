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
    vector<vector<ll>> list(N,vector<ll>());

    for(int i = 0; i < N; i++){
        ll L;
        cin >> L;
        list[i].push_back(L);
        rep(j,0,L){
            ll a;
            cin >> a;
            list[i].push_back(a);
        }
    }
    sort(list.begin(),list.end());

    // rep(i,0,N){
    //     cout << list[i][0] << " ";
    //     rep(j,0,list[i][0]){
    //         cout << list[i][j+1] << " ";
    //     }
    //     cout << endl;
    // }
    ll ans = 1;
    rep(i,0,N-1){
        if(list[i][0] != list[i+1][0]){
            ans++;
        }else{
            rep(j,1,list[i][0]+1){
                if(list[i][j] == list[i+1][j]){
                    continue;
                }else{
                    ans++;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}