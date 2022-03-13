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
    ll N;
    ll X;
    string S;
    cin >> N >> X;
    cin >> S;

    ll val = 1;
    int status = X % 2 ; // 1:　奇数 , 0:偶数 
    stack<int> s;
    rep(i,0,N){
        if(S[i] == 'U'){
            if(s.size() != 0 && s.top() != 0){
                s.pop();
            }else{
                s.push(0);
            }
        }else if(S[i] == 'L'){
            s.push(1);
        }else{
            s.push(2);
        }
    }

    vector<int> list;
    while(s.size() != 0){
        int t = s.top();
        list.push_back(t);
        s.pop();
    }

    for(int i = list.size()-1; i >= 0; i--){
        if(list[i] == 0){
            X = X / 2;
        }else if(list[i] == 1){
            X = X * 2;
        }else{
            X = X * 2 + 1;
        }
    }

    cout << X << endl;




}