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
    set<ll> s;

    for(int i = 1; i <= 1000; i++){
        for(int  j = 1; j <= 1000; j++){
            s.insert(4*i*j + 3*i + 3*j);
        }
    }

    int N;
    cin >> N;
    int ans = 0;
    for(int i = 0; i < N; i++){
        int t;
        cin >> t;
        auto f = s.find(t);
        if(f == s.end()) ans++;
    }
    cout << ans << endl;
}