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
    int N,K,A;
    cin >> N >> K >> A;

    int t = A;
    for(int i = 0; i < K-1;i++){
        t++;
        if(t == N+1){
            t = 1;
        }
    }
    cout << t << endl;

}