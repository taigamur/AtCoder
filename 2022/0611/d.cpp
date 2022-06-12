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

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){

    int N,Q;
    cin >> N >> Q;

    vll A(N);
    rep(i,0,N) cin >> A[i];

    sort(A.begin(), A.end());
    vll B(N);

    B[0] = A[0];
    rep(i,1,N){
        B[i] = A[i] + B[i-1];
    }

    rep(i,0,Q){
        ll x;
        cin >> x;

        auto t = lower_bound(A.begin(), A.end(),x);
        if(t == A.end()){
            ll ans = (ll) x * N - B[N-1];
            cout << ans << endl;
        }else if(t == A.begin()){
            ll ans = B[N-1] - x * N;
            cout << ans << endl;
        }else{
            ll j = t - A.begin();
            ll ans = 0;

            ans = (ll) j * x - B[j-1];
            
            ans += (ll) (B[N-1] - B[j-1]) - x * ( N - j );

            // ans = x * (j * 2 - N ) - B[j-1] * 2 + B[N-1];


            cout << ans << endl; 
        }
    }

}