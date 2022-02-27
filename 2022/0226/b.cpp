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
    int N,M;
    cin >> N >> M;
    
    vector<int> a(N);
    vector<int> b(M);

    rep(i,0,N) cin >> a[i];
    rep(i,0,M) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int a_i = 0;

    rep(i,0,M){
        bool ok = false;
        rep(j,a_i,N){
            if(b[i] == a[j]){
                a_i = j+1;
                ok = true;
                break;
            }
        }
        if(ok){
            continue;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

}