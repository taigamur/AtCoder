#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){

    ll a,b;
    cin >> a >> b;

    int init = 0;
    ll n,m;

    ll sum = 0;
    rep(i,0,a){
        rep(j,0,b){
            ll v;
            cin >> v;
            if(init == 0){
                n = v / 7 + 1;
                m = v % 7 ;
                sum++;
                init = 1;
                if(m + b > 8){
                    cout << "No" << endl;
                    return 0;
                }
            }else{
                ll c = (i+n-1) * 7 + j+m;
                if(c == v){
                    sum++;
                } 
            }
        }
    }
    if(sum == a * b){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}