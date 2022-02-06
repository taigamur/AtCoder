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
    ll n;
    cin >> n;



    if(n > 10){
        cout << "Yes" << endl;
    }else{
        ll a = pow(2,n);
        ll b = pow(n,2);
        if(a > b){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }



}