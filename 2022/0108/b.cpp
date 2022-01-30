#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <limits>
#include <iomanip>

using namespace std;

typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){
    int n;
    cin >> n;

    vector<int> x(n);
    vector<int> y(n);

    rep(i,0,n){
        cin >> x[i];
        cin >> y[i];
    }
    double ans = 0;
    rep(i,0,n){
        rep(j,0,n){
            if(i != j){
                double d = sqrt(pow(x[i]-x[j],2) + pow(y[i]-y[j],2));
                ans = max(ans,d);
            }
        }
    }
    cout << fixed << setprecision(10) << ans << endl;

}