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
    int n,w;
    cin >> n >> w;
    vi a(n);
    rep(i,0,n) cin >> a[i];
    set<int> st;
    int sum = 0;
    int ans = 0;
    int x,y,z;
    rep(i,0,n){
        x = a[i];
        if(x <= w) st.insert(x);
        rep(j,i+1,n){
            y = a[j];
            if(x + y <= w) st.insert(x+y);
            rep(k,j+1,n){
                z = a[k];
                if(x + y + z <= w) st.insert(x+y+z);
            }
        }
    }
    cout << st.size() << endl;
}