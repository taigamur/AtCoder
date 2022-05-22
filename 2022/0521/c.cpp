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

    // vector<vector<int>> list(10, vector<int>(10,0));

    // rep(i,0,n){
    //     string s;
    //     cin >> s;

    //     rep(j,0,10){
    //         int t = s[j] - '0';
    //         list[t][j]++;
    //     }
    // }

    // int ans = inf;
    // rep(i,0,10){
    //     int time = 0;
    //     rep(j,0,10){
    //         if(list[i][j] == 0){

    //         }else if(list[i][j] == 1){
    //             time = max(time, j);
    //         }else{
    //             time = max(time, j + (list[i][j] - 1) * 10);
    //         }
    //     }
    //     if(time < ans) ans = time;
    // }

    // cout << ans << endl;

    map<int,int> mp;

    rep(i,0,n){
        int t;
        cin >> t;
        if(mp.contains(t)){
            mp[t] += 1;
        }else{
            mp[t] = 1;
        }

    }

    for(auto i = mp.begin(); i != mp.end(); i++){
        for(auto j = i + 1; j != mp.end(); j++){
            
        }
    }

}