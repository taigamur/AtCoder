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
    vector<int> A(100,0);
    vector<int> B(100,0);
    vector<int> C(N+M+1);

    rep(i,0,N+1) cin >> A[i];
    rep(i,0,N+M+1) cin >> C[i];


    for(int i = M; i >= 0; i--){
        int sum = 0;
        for(int j = 1; i + j <= M; j++){
            if(N-j >= 0) sum += B[i + j] * A[N-j];
        }
        // cout << (C[i+N] - sum) << endl;
        // cout << A[N] << endl;
        B[i] = (C[i+N] - sum) / A[N];

    }



    rep(i,0,M) cout << B[i] << " ";
    cout << B[M] << endl;

}