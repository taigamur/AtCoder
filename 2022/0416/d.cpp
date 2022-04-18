#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <map>
#include <math.h>
#include <iomanip>
#include <limits>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;

int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){
    int n;
    cin >> n;
    
    vector<vector<int>> dp(n+10,vector<int>(n+10,0));

    rep(i,1,n+1){
        int t;
        cin >> t;
        dp[t][i] = dp[t][i-1] + 1;
        rep(j,i+1,n+1) dp[t][j] = dp[t][i];
    }

    int q;
    cin >> q;

    rep(i,0,q){
        int L,R,X;
        cin >> L >> R >> X;
        int ans = dp[X][R] - dp[X][L-1];
        cout << ans << endl;
    }
    return 0;
}