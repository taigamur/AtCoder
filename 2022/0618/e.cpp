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

int main(){

    int N;
    cin >> N;

    vll X(N+1);
    rep(i,1,N+1) cin >> X[i];

    vll C(N+1);
    rep(i,1,N+1) cin >> C[i];

    vll W(N+1,0);
    rep(i,1,N+1){
        W[X[i]] += C[i];
    }

    set<pair<ll,ll>> st;

    rep(i,1,N+1){
        pair<ll,ll> p;  // w , i;
        p.first = W[i];
        p.second = i;
        st.insert(p);
    }

    vll used(N+1,0);

    ll ans = 0;
    ll end = 0;
    while(end < N){
        pair<ll,ll> p;
        p = *st.begin();

        if(used[p.second] == 0){
            int i = p.second;  
            ans += p.first;
            W[X[i]] -= C[i];
            pair<ll,ll> q;
            q.first = W[X[i]];
            q.second = X[i];
            if(q.second >= 0) st.insert(q);
            used[i] = 1;
            end++;
        }else{
            st.erase(st.begin());
        }
    }

    cout << ans << endl;
    


}