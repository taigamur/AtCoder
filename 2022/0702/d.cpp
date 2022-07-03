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

int main(){
    int N,X;
    cin >> N >> X;

    vector<vector<ll>> dp(N+1,vector<ll>(N+1,0));

    rep(i,1,N+1){
        ll a,b;
        cin >> a >> b;
        dp[1][i] = a + b;
    }

    rep(i,1,N+1){
        rep(j,1,N+1){
            
        }
    }

}