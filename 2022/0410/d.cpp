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
    int q;
    cin >> q;
    deque<pair<ll,ll>> deq;

    rep(i,0,q){
        ll a,b,c;
        pair<ll,ll> p;
        cin >> a;
        if(a == 1){
            cin >> b >> c;
            p.first = b;
            p.second = c;
            deq.push_back(p);
        }else if(a == 2){
            cin >> c;
            ll sum = 0;
            ll ans = 0;
            while(sum < c){
                p = deq.front();
                if(p.second <= c - sum){
                    ans += p.first * p.second;
                    sum += p.second;
                    deq.pop_front();
                }else{
                    ans += p.first * (c - sum);
                    p.second = p.second - (c - sum);
                    deq.pop_front();
                    deq.push_front(p);
                    sum += c - sum;
                }
            }
            cout << ans << endl;
        }
    }
    

}