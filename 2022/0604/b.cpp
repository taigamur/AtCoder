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

    int n;
    cin >> n;

    vector<vector<int>> list(n,vector<int>(n,0));

    rep(i,0,n){
        rep(j,0,i+1){
            if(j == 0 || j == i){
                list[i][j] = 1;
                cout << 1 << " ";
            }else{
                list[i][j] = list[i-1][j-1] + list[i-1][j];
                cout << list[i][j] << " ";
            }
            
        }
        cout << endl;
    }


}