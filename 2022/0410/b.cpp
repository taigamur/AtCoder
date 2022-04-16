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

    vector<string> s(n);
    vector<string> t(n);

    rep(i,0,n){
        cin >> s[i] >> t[i];
    }

    vector<string> list;

    rep(i,0,n){


        rep(j,0,n){

            if(i != j && (s[i] == s[j] || s[i] == t[j])){
                rep(k,0,n){
                    if(i != k && (t[i] == s[k] || t[i] == t[k] ) ){
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
            
        }


    }
    cout << "Yes" << endl;
    return 0;



}