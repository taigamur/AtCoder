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
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if(a == c){
        if(b <= d){
            cout << "Takahashi" << endl;
        }else{
            cout << "Aoki" << endl;
        }
    }else{
        if(a < c){
            cout << "Takahashi" << endl;
        }else{
            cout << "Aoki" << endl;
        }
    }

}