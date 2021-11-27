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

    int N,x;
    cin >> N >> x;
    vector<int> A(N+1,0);
    rep(i,0,N){
        cin >> A[i+1];
    }
    vector<int> list(N+1,0);
    int ans = 0;
    ans++;
    list[x] = 1;
    x = A[x];

    int i = 0;
    while(i < N){
        if(list[x] == 0){
            ans++;
            list[x] = 1;
            x = A[x];
        }else{
            break;
        }
        i++;
    }

    cout << ans << endl;
}