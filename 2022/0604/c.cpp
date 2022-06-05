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
    int n,k;
    cin >> n >> k;

    vll a(n);
    vector<vector<ll>> c(k, vector<ll>());


    rep(i,0,n){
        ll t;
        cin >> t;
        a[i] = t;

        c[i % k].push_back(t);

    }

    sort(a.begin(), a.end());

    rep(i,0,k){
        sort(c[i].begin(), c[i].end());

        for(int j = 0; k * j + i  < n; j++){
            if(c[i][j] != a[i + j * k]){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;


}