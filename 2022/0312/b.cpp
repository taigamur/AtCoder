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
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    rep(i,0,N){
        cin >> A[i];
    }
    rep(i,0,N){
        cin >> B[i];
    }

    ll ans1 = 0;
    ll ans2 = 0;

    rep(i,0,N){
        if(A[i] == B[i]) ans1++;
    }

    rep(i,0,N){
        rep(j,0,N){
            if(i != j){
                if(A[i] == B[j]) ans2++;
            }
        }
    }

    cout << ans1 << endl;
    cout << ans2 << endl;


}