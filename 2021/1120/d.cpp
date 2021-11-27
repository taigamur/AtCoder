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

    int N = 1048576;

    vector<ll> A(N,-1);
    
    set<int> st;
    rep(i,0,N){
        st.insert(i);
    }



    int Q;
    cin >> Q;
    rep(i,0,Q){
        int t;
        cin >> t;
        ll x;
        int j;
        cin >> x;
        j = x % N;
        if(t == 1){
            auto it = st.lower_bound(j);
            if(it == st.end()){
                it = st.lower_bound(0);
                A[*it] = x;
            }else{
                A[*it] = x;
            }
            st.erase(*it);
        }else{
            cout << A[j] << endl;
        }
    }

}