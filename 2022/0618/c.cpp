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

int main(){

    vi w(4);
    vi h(4);

    vector<vector<int>> mp(4,vector<int>(4));

    rep(i,1,4) cin >> h[i];
    rep(i,1,4) cin >> w[i];

    ll ans = 0;

    for(int i = 1; i <= 28; i++){
        for(int j = 1; i+j < h[1]; j++){

            mp[1][1] = i;
            mp[1][2] = j;
            mp[1][3] = h[1] - i - j;

            for(int k = 1; k <= 28; k++){
                for(int l = 1; k+l < h[2]; l++){
                    mp[2][1] = k;
                    mp[2][2] = l;
                    mp[2][3] = h[2] - k - l;

                    mp[3][1] = w[1] - mp[1][1] - mp[2][1];
                    mp[3][2] = w[2] - mp[1][2] - mp[2][2];
                    mp[3][3] = w[3] - mp[1][3] - mp[2][3];

                    if(mp[3][1] > 0 && mp[3][2] > 0 && mp[3][3] > 0 && mp[3][1] + mp[3][2] + mp[3][3] == h[3]) ans++;
                }
            }

            

        }
    }

    cout << ans << endl;
}