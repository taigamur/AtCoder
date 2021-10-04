#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
typedef long long ll;

int main(){

    string N;
    cin >> N;
    ll ans = 0;
    for(int i = 0; i < (1 << N.size()); i++){
        vector<ll> x;
        vector<ll> y;
        for(int j = 0; j < N.size(); j++){
            if(i & (1 << j)){
                x.push_back(N[j] - '0');
            }else{
                y.push_back(N[j] - '0');
            }
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

        ll g = 0;
        ll h = 0;
        for(int j = 0; j < x.size(); j++){
            g += x[j] * pow(10,j);
        }
        for(int j = 0; j < y.size(); j++){
            h += y[j] * pow(10,j);
        }
        ans = max(ans,g*h);

    }

    cout << ans << endl;
    
}