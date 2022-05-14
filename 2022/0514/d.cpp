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
    int w;
    cin >> w;

    vi list(w+1,1);

    set<int> st;
    st.insert(0);
    st.insert(1);
    st.insert(2);

    // rep(i,0,w){
    //     st.insert(i / 3);
    //     st.insert(i / 3 + (w % 3));
    // }

    int q = 10;
    while(q < w){
        st.insert(q);
        
        for(int j = 1; j < 10; j++){
            st.insert(q*j);
        }
        q *= 10;
    }

    int cnt = 3;
    while(cnt <= w){
        int t = cnt;
        auto a = lower_bound(st.begin(), st.end(), t);
        a--;
        t = t - *a;

        if(t > 0){
            auto b = lower_bound(st.begin(), st.end(), t);
            b--;
            t = t - *b;
        }
        st.insert(t);
        cnt++;
    }
    st.erase(0);
    cout << st.size() << endl;
    
    auto t = st.begin();
    while(t != st.end()){
        cout << *t << " ";
        t++;
    }
    cout << endl;
}