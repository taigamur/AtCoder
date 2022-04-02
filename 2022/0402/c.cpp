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
    int n,k,x;
    cin >> n >> k >> x;
    vi a(n);

    rep(i,0,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end(),greater<int>());

    int sum = 0;
    int pos = 0;
    while(1){
        if(pos == n) break;
        if(sum == k ) break;
        
        if(a[pos] >= x){
            int s = min(k-sum,a[pos]/x);
            a[pos] -= s * x;
            sum += s;
        }
        pos++;
    }

    ll ans = 0;
    if(sum != k){
        sort(a.begin(),a.end(),greater<int>());
        rep(i,k-sum,n) ans += a[i]; 
    }else{
        rep(i,0,n) ans += a[i];
        
    }
    cout << ans << endl;
    
    
}