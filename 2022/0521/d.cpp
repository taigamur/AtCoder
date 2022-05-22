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

ll calc(ll t){
    int ans = 1;
    while(t > 1){
        ans *= t;
        t--;
    }
    return ans;
}



int main(){
    int n;
    cin >> n;

    vi list(n,0);
    int t;
    ll cnt = 0;
    rep(i,0,n){
        cin >> t;
        if(list[t] == 0) cnt++;
        list[t]++;
    }

    ll ans = cnt * (cnt-1) * (cnt-2) / (3 * 2);
    rep(i,0,n){
        if(list[i] > 1){
            ans *= list[i];
        }
    }

    cout << ans << endl;

    
}