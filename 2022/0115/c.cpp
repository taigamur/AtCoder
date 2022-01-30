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
    ll N;
    cin >> N;
    ll Q;
    cin >> Q;

    vector<pair<ll,ll>> A(N);
    vector<ll> B(N);
    rep(i,0,N){
        pair<ll,ll> p;
        cin >> p.first;
        p.second = i+1;
        A[i] = p;
    }

    sort(A.begin(),A.end());
    rep(i,0,N) B[i] = A[i].first;

    rep(i,0,Q){
        ll x;
        cin >> x;
        auto j  = lower_bound(B.begin(),B.end(),x);
        ll s = j - B.begin();

        ll k;
        cin >> k;
        ll z = A.size();
        if(s+k-1 < z){
            if(A[s+k-1].first == x){
                cout << A[s+k-1].second << endl;
            }else{
                cout << -1 << endl;
            }
        }else{
                cout << -1 << endl;
        }

    }


}