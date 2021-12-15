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
    int N,Q;
    cin >> N >> Q;

    vector<ll> list(N);
    for(int i = 0; i < N; i++){
        cin >> list[i];
    }
    sort(list.begin(),list.end());

    for(int i = 0; i < Q; i++){
        int x;
        cin >> x;

        auto j = lower_bound(list.begin(),list.end(),x);
        int ans = j - list.begin();
        cout << N - ans << endl;
    }

}