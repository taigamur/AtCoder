#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <cmath>

using namespace std;

typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){

    int N;
    int W;
    cin >> N >> W;

    vector<vector<ll>> list(N+1, vector<ll>(W+1,0));

    for(int i = 1; i <= N; i++){
        int a,b;
        cin >> a >> b;
        for(int j = 0; j <=W; j++){
            if(j >= b){
                list[i][j] = list[i][j-b] + a;
            }
            list[i][j] = max(list[i-1][j],list[i][j]);
        }
    }
    cout << list[N][W] << endl;
}