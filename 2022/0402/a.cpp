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
    vi x(3);
    vi y(3);
    rep(i,0,3){
        cin >> x[i] >> y[i];
    }
    int ans_x,ans_y;
    if(x[0] == x[1]){
        ans_x = x[2];
    }else if(x[0] == x[2]){
        ans_x = x[1];
    }else{
        ans_x = x[0];
    }

    if(y[0] == y[1]){
        ans_y = y[2];
    }else if(y[0] == y[2]){
        ans_y = y[1];
    }else{
        ans_y = y[0];
    }

    cout << ans_x << " " << ans_y << endl;

}