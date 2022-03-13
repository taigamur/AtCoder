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
    vector<pair<int,int>> y(N);
    vector<int> x(N);
    pair<int,int> p;
    rep(i,0,N){
        cin >> x[i] >> p.first;
        p.second = i;
        y[i] = p;
    }

    string str;
    cin >> str;

    sort(y.begin(),y.end());

    int i = 0;
    while(i < N){
        int j = i + 1;
        int r_x = inf;
        int l_x = 0;

        int s = y[i].second;
        if(str[s] == 'R'){
            r_x = min(r_x,x[s]);
        }else{
            l_x = max(l_x,x[s]);
        }

        while(j < N){
            if(y[i].first == y[j].first){
                int t = y[j].second;
                if(str[t] == 'R'){
                    r_x = min(r_x,x[t]);
                }else{
                    l_x = max(l_x,x[t]);
                }
                j++;
            }else{
                break;
            }
        }
        if(r_x < l_x){
            cout << "Yes" << endl;
            return 0;
        }
        i = j;
    }

    cout << "No" << endl;

}