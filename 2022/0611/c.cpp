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
    ll X,A,D,N;
    cin >> X >> A >> D >> N;

    ll H = max(D * (N - 1) + A, A);
    ll L = min(D * (N - 1) + A, A);

    if(X <= L){
        cout << L - X << endl;
    }else if(X >= H){
        cout << X - H << endl;
    }else{
        ll S = ((X - A) / D) * D + A;
        ll T = ((X - A) / D) * D + D + A;

        ll ans = min(abs(S-X), abs(T-X));
        cout << ans << endl;

    }

}