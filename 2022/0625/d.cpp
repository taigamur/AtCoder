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

using Pair = pair<long, int>;

int main(){

    int N;
    cin >> N;

    vector<vector<ll>> G(N,vector<ll>(N,0));

    vector<pair<ll,ll>> map;
    vll P(N);

    rep(i,0,N){
        pair<ll,ll> p;
        cin >> p.first >> p.second;
        map.push_back(p);

        cin >> P[i]; 
    }

    rep(i,0,N){
        rep(j,0,N){
            if(i == j) continue;
            ll dist = abs(map[i].first - map[j].first) + abs(map[i].second - map[j].second);
            G[i][j] = ceil( (double) dist / P[i]);
        }
    }

    ll ans = INF;

    // 始点
    rep(s,0,N){
        vi visit(N,0);
        vll dist(N,INF);

        priority_queue<Pair, vector<Pair>, greater<Pair>> pq;
        dist[s] = 0;
        pq.emplace(dist[s],s);
        while(!pq.empty()){
            Pair p = pq.top();
            pq.pop();
            int v = p.second;
            if(dist[v] < p.first) continue;
            for(int i = 0; i < N; i++){
                if(i != v){
                    if(dist[i] > dist[v] + G[v][i]){
                        pq.emplace(G[v][i],i);
                    }
                }
            }
        }

        int d = 0;
        rep(i,0,N){
           if(dist[i] > d) d = dist[i];
        }
        
        
        ll a = ceil((double) d / P[s]);
        ans = min( ans, a  );
    }

    cout << ans << endl;

}