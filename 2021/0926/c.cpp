#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
const long long INF = 1LL << 60; 
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;


    for(int i = 0; i < n; i++){
        ll t;
        cin >> t;
        a[i] = t;
        sum += t;
    }

    ll x;
    cin >> x;
    ll ans = 0;

    if(x >= sum){
        ans = n * (x / sum);
        x = x - sum * (x / sum);
    }

    for(int i = 0; i < n; i++){
        if(x - a[i] >= 0){
            ans++;
            x = x - a[i];
        }else{
            cout << ans + 1 << endl;
            return 0;
        }
    }
}