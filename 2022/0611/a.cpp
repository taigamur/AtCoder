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

    int r,c;
    cin >> r >> c;

    int a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;

    if(r == 1 && c == 1){
        cout << a1 << endl;
    }else if(r == 1 && c == 2){
        cout << a2 << endl;
    }else if(r == 2 && c == 1){
        cout << a3 << endl;
    }else{
        cout << a4 << endl;
    }
}