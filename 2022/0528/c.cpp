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

    map<int,int> mp;

    int q;
    cin >> q;
    
    rep(i,0,q){
        int t;
        cin >> t;

        if(t == 1){
            int x;
            cin >> x;
            mp[x]++;
        }else if(t == 2){
            int x,c;
            cin >> x >> c;

            if(mp[x] > c){
                mp[x] -= c;
            }else{
                mp.erase(x);
            }
        }else{
            int a,b;
            a = mp.begin()->first;
            auto h = mp.end();
            h--;
            b = h->first;
            cout << b - a << endl;
        }
    }

}