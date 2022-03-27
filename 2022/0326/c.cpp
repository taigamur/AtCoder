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

    int K;
    cin >> K;

    vector<int> A(N);
    vector<int> B(N);
    vector<int> A2(N,-1);
    vector<int> B2(N,-1);

    rep(i,0,N) cin >> A[i];
    rep(i,0,N) cin >> B[i];

    A2[0] = A[0];
    B2[0] = B[0];
    rep(i,1,N){
        if(A2[i-1] != -1){
            if(abs(A[i]-A2[i-1]) <= K) A2[i] = A[i];
            if(abs(B[i]-A2[i-1]) <= K) B2[i] = B[i];
        }
        if(B2[i-1] != -1){
            if(abs(A[i]-B2[i-1]) <= K) A2[i] = A[i];
            if(abs(B[i]-B2[i-1]) <= K) B2[i] = B[i];
        }
    }

    if(A2[N-1] != -1 || B2[N-1] != -1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}