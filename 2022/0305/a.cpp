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
    int a,b,c,x;
    cin >> a >> b >> c >> x;

    if(x <= a){
        cout << setprecision(10) << 1 << endl;
    }else if(x > a && x <= b){
        cout << setprecision(10) << (double) 1 / (b - a) * c << endl;
    }else{
        cout << setprecision(10) << 0 << endl;
    }


}