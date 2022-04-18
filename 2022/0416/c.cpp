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
static const int MAX = 100005;
#define SIZE 10005

struct Node{
    int right, left, parent;
};
// struct Node node[SIZE];

class Edge{
    public: 
    int t, w;
    Edge();
    Edge(int t, int w): t(t), w(w){};
};
// vector<Edge> G[MAX];



int main(){
    int n,m,k;
    cin >> n >> m >> k;

    vector<vector<ll>> dp(n*m+1,vector<ll>(n+1,0));

    rep(i,1,m+1){
        dp[i][1] = 1;

    }

    rep(i,2,n+1){
        rep(j,1,n*m+1){
            for(int k = 1; k <= m; k++){
                if(j-k > 0){
                    dp[j][i] += dp[j-k][i-1];
                }
                dp[j][i] %= 998244353;
            } 
        }
    }

    // rep(j,1,n*m+1){
    //     rep(i,1,n+1) {
    //         cout << dp[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    ll ans = 0;
    rep(i,1,k+1) ans += dp[i][n];

    cout << ans % 998244353 << endl; 





}