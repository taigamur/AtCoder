#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <stack>

using namespace std;

typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){
    int H,W;
    cin >> H >> W;
    vector<vector<int>> list(H,vector<int>(W));

    rep(i,0,H){
        rep(j,0,W){
            cin >> list[i][j];
        }
    }

    rep(i,0,W){
        rep(j,0,H){
            cout << list[j][i] << " ";
        }
        cout << endl;
    }
}