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

    int N,K;
    cin >> N >> K;

    vector<pair<int,int>> list(N+1);

    vector<int> A(K);
    rep(i,0,K){
        cin >> A[i];
    }

    rep(i,1,N+1){
        pair<int,int> p;
        cin >> p.first >> p.second;
        list[i] = p;
    }

    vector<double> dis(N+1,inf);
    rep(i,0,K){
        rep(j,1,N+1){

            pair<int,int> x = list[A[i]];
            pair<int,int> y = list[j];

            double d =  sqrt(pow(x.first - y.first, 2) + pow(x.second - y.second, 2));
            dis[j] = min(dis[j], d);
        }
    }

    double ans = 0;
    rep(i,1,N+1){
        ans = max(ans, dis[i]);
    }

    cout << fixed << setprecision(10) << ans << endl;



}