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
    int n,x,y;
    cin >> n >> x >> y;
    vi a(n);
    rep(i,0,n) cin >> a[i];

    ll ans = 0;
    rep(i,0,n){

        int h = max_element(a.begin() + i, a.end()) - a.begin();
        int l = min_element(a.begin() + i, a.end()) - a.begin();

        if(a[h] == x && a[l] == y){
            int l = find(a.begin() + i, a.end(), y) - a.begin();
            int r = find(a.begin() + i, a.end(), x) - a.begin();
            if(l < n && r < n ){
                int p = max(r,l);
                ans += n - p;
            }
        }

    }
    cout << ans << endl;

}