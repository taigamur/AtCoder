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
    int v,a,b,c;
    cin >> v >> a >> b >> c;

    vector<int> list(3);
    list[0] = a;
    list[1] = b;
    list[2] = c;

    while(v >= 0){
        for(int i = 0; i < 3; i++){
            if(v >= list[i]){
                v -= list[i];
            }else{
                if(i == 0){
                    cout << "F" << endl;
                }else if(i == 1){
                    cout << "M" << endl;
                }else{
                    cout << "T" << endl;
                }
                return 0;
            }
        }
    }
}