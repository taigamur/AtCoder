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
    int N,K;
    cin >> N >> K;

    vector<vector<int>> list(N,vector<int>(30,0));

    rep(i,0,N){
        string s;
        cin >> s;
        rep(j,0,s.size()){
            int t = s[j] - 'a';
            list[i][t]++;
        }
    }

    // for(int i = 0; i < N; i++){
    //     rep(j,0,30){
    //         cout << list[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "----" << endl;

    ll ans = 0;
    for(int bit = 0; bit < (1 << N); bit++){
        
        vector<int> tmp(30,0);
        for(int i = 0; i < N; i++){
            if(bit & (1 << i)){
                rep(j,0,30){
                    tmp[j] += list[i][j]; 
                }
            }
        }
        ll sum = 0;
        // rep(i,0,30){
        //     cout << tmp[i] << " ";
        // }
        // cout << endl;
        rep(i,0,30){
            if(tmp[i] == K) sum++;
        }
        ans = max(ans,sum);
    }
    cout << ans << endl;



}