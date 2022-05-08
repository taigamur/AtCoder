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

    int n,a,b;
    cin >> n >> a >> b;

    vector<vector<int>> map(n*a+1,vector<int>(n*b+1));

    int B = 1;
    int A = 1;

    rep(i,1,a*n+1){
        B = 1;
        rep(j,1,b*n+1){
            
            if(A * B == 1){
                map[i][j] = 1;
            }else{
                map[i][j] = 0;
            }
            if(j % b == 0) B *= -1;
        }
        if(i % a == 0) A *= -1;
    }

    rep(i,1,a*n+1){
        rep(j,1,b*n+1){
            if(map[i][j] == 1) cout << ".";
            else cout << "#";
        }
        cout << endl;
    }


}