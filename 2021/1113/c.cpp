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

    ll N;
    cin >> N;

    ll ans = 0;

    for(int i = 1; i*i*i <= N; i++){
        int a = i;
        int b = N / (i*b);
    }
    cout << ans << endl;

}