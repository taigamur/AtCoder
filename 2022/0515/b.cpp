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
    string s;
    cin >> s;

    // priority_queue<double, vector<double>. greater<double>> P;
    set<int> st;

    int q = 0;
    rep(i,0,n-2){


        if(s[i] == 'A' && s[i+1] == 'R' && s[i+2] == 'C'){
            int l = i-1;
            int r = i+3;
            int p = 1;    
            while(l >= 0 && r < n){
                if(s[l] == 'A' && s[r] == 'C'){
                    p++;
                    l--;
                    r++;
                }else{
                    break;
                }
            }

            if(p > 1){
                st.insert(p);
            }else{
                q++;
            }
        }
    }

    int ans = 0;
    while(q > 0 || st.size() > 0){
        //奇数
        if(st.size() > 0){
            auto u = st.end();
            u--;
            int t = *u;
            st.erase(t);
            t--;
            if(t > 0) st.insert(t);
            ans++;
        }else if(q > 0){
            q--;
            ans++;
        }else{
            break;
        }

        //偶数
        if(q > 0){
            q--;
            ans++;
        }else if(st.size() > 0){
            auto u = st.begin();
            int t = *u;
            st.erase(t);
            ans++;
        }else{
            break;
        }
    }

    cout << ans << endl;



}