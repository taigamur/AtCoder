#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>

using namespace std;

typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){
    int N;
    cin >> N;
    vector<int> val;

    val.push_back(0);
    val.push_back(360);
    int sum = 0;
    rep(i,0,N){
        int j;
        cin >> j;
        sum = sum + j;
        if(sum  >= 360){
            sum = sum - 360;
        }
        val.push_back(sum);
    }
    sort(val.begin(), val.end());

    int ans = 0;
    rep(i,1,val.size()){
        int j = val[i] - val[i-1];
     
        if(j > ans){
            ans = j;
        }
    }
    cout << ans << endl;
}