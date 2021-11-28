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

    ll x,y;
    cin >> x >> y;

    int a = x % 10;
    int b = y % 10;

    while(x > 0 && y > 0){
        x = x / 10;
        y = y / 10;
        if(a + b >= 10){
            cout << "Hard" << endl;
            return 0;
        }
        a = x % 10;
        b = y % 10;
    }
    cout << "Easy" << endl;
    
}