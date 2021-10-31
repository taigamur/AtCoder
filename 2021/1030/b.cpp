#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){
    int N;
    cin >> N;

    vector<int> list(N,0);
    rep(i,0,N-1){
        int a,b;
        cin >> a >> b;
        list[a-1]++;
        list[b-1]++;
    }

    rep(i,0,N){
        if(list[i] == N-1){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}