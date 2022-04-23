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
    int  a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int t = x;
    ll A = 0;
    while(t > 0){
        if(t >= a){
            A += b * a;
            t -= a;
        }else{
            A += t * b;
            t = 0;
        }
        t -= c;
    }

    t = x;
    ll B = 0;
    while(t > 0){
        if(t >= d){
            B += e * d;
            t -= d;
        }else{
            B += e * t;
            t = 0;
        }
        t -= f;
    }

    if(A == B){
        cout << "Draw" << endl;
    }else if(A > B){
        cout << "Takahashi" << endl;
    }else{
        cout << "Aoki" << endl;
    }



}