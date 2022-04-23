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
    string S;
    cin >> S;

    int big = 0;
    int small = 0;

    vi list;

    rep(i,0,S.size()){
        int t = S[i] - '0';

        int a = 'a' - '0';
        int z = 'z' - '0';

        int A = 'A' - '0';
        int Z = 'Z' - '0';

        if(t >= a && t <= z){
            small = 1;
        }else if(t >= A && t <= Z){
            big = 1;
        }

        list.push_back(t);

    }

    sort(list.begin(), list.end());

    rep(i,0,S.size()-1){
        if(list[i] == list[i+1]){
            cout << "No" << endl;
            return 0;
        }
    }

    if(small == 1 && big == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;

}