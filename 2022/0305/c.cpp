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
    ll N;
    cin >> N;


    ll W = 998244353;

    vector<ll> list(10,1);
    vector<ll> list_next(10,1);
    rep(i,1,N){
        list_next[1] = (list[1] + list[2]) % W;
        rep(i,2,9){
            list_next[i] = (list[i-1] + list[i] + list[i+1]) % W;
        }
        list_next[9] = ( list[8] + list[9]) % W;

        list = list_next;
    }

    ll ans = 0;
    rep(i,1,10){
        ans += list[i];
    }

    ans = ans % W;
    cout << ans << endl;

}