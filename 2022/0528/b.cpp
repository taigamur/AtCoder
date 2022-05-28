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

int main(){

    int h,w;
    cin >> h >> w;

    pair<int,int> a;
    pair<int,int> b;
    int t = 0;
    rep(i,0,h){
        string s;
        cin >> s;
        rep(j,0,w){
            if(s[j] == 'o'){
                if(t == 0){
                    a.first = j;
                    a.second = i;
                    t = 1;
                }else{
                    b.first = j;
                    b.second = i;
                }
            }
        }
    }

    int ans = abs(a.first - b.first) + abs(a.second - b.second);
    cout << ans << endl;

}