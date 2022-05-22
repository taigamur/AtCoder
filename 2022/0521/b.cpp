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

    int n;
    cin >> n;
    int k;
    cin >> k;


    vi a(n);

    int m = 0;
    int t;
    rep(i,0,n){
        cin >> t;
        m = max(m, t);
        a[i] = t;
    }
    
    vi list;
    rep(i,0,n){
        if(a[i] == m){
            list.push_back(i+1);
        }
    }



    rep(i,0,k){
        cin >> t;

        rep(j,0,list.size()){
            if(t == list[j]){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;

}