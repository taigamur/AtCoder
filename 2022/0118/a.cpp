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
    ll t;
    cin >> t;

    ll a = t * t + 2 * t + 3;
    ll b = a + t;
    ll c = b * b + 2 * b + 3;

    ll d = a * a + 2 * a + 3;

    ll e = c + d;

    ll f = e * e + 2 * e + 3;
    cout << f << endl;
}