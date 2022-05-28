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

ll gcd(ll a, ll b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}

ll lcm(ll a, ll b){
  return a*b / gcd(a, b);
}

int main(){

    ll n,a,b;
    cin >> n >> a >> b;

    long long sum = 0;

    if(n % 2 == 0){
        sum = (n + 1) * (n / 2);
    }else{
        sum = (n + 1) * (n / 2) + (n + 1) / 2; 
    }

    // cout << sum << endl;

    ll t = n / a;
    if(t % 2 == 0){
        sum -= (a + a*t) * (t/2);
    }else{
        sum -= (a + a*t) * (t/2)  + (a + a*t)/2;
    }

    t = n / b;
    if(t % 2 == 0){
        sum -= (b + b*t) * (t/2);
    }else{
        sum -= (b + b*t) * (t/2)  + (b + b*t)/2;
    }

    if(b > a){
        ll e = a;
        a = b;
        b = e;
    }

    ll c;
    c = lcm(a,b);

    t = n / c;
    if(t % 2 == 0){
        sum += (c + c*t) * (t/2);
    }else{
        sum += (c + c*t) * (t/2)  + (c + c*t)/2;
    }
    cout << sum << endl;



}