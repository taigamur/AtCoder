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
    int N;
    cin >> N;
    int Q;
    cin >> Q;
    // vector<int> list(N);
    // rep(i,0,N) list[i] = i+1;

    // rep(i,0,Q){
    //     int x;
    //     cin >> x;

    //     int t = find(list.begin(), list.end(), x) - list.begin();

    //     if(t == N-1){
    //         list[t] = list[t-1];
    //         list[t-1] = x;
    //     }else{
    //         list[t] = list[t+1];
    //         list[t+1] = x;
    //     }
    // }

    // rep(i,0,N-1){
    //     cout << list[i] << " ";
    // }
    // cout << list[N-1] << endl;

    struct Node node[N+3];

    node[1].left = -1;
    node[1].right = 2;
    rep(i,2,N+1){
        node[i].left = i-1;
        node[i].right = i+1;
    }

    rep(i,0,Q){
        int x;
        cin >> x;

        if(node[x].right == N+1){

            Node tmp;
            tmp = node[node[x].left];
            int t = node[x].left;
        
            if(tmp.left != -1) node[tmp.left].right = x;

            node[x].right = t;
            node[x].left = tmp.left;

            node[t].left = x;
            node[t].right = N+1;


        }else{

            Node tmp;
            tmp = node[node[x].right];
            int t = node[x].right;

            if(node[x].left != -1){
                node[node[x].left].right = t;
                node[t].left = node[x].left;
            }else{
                node[t].left = -1;
            }
            node[t].right = x;

            node[x].right = tmp.right;
            node[x].left = t;

            node[tmp.right].left = x;
        }
    }

    int s;
    rep(i,1,N+1){
        if(node[i].left == -1) s = i;
    }

    rep(i,0,N){
        cout << s << " ";
        s = node[s].right;
    }
    cout << endl;
    
}