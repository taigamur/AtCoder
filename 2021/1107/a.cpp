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
    double  N;
    cin >> N;

    if(N == 0){
        cout << 0 << endl;
    }else{
        N = N * 10;
        int n;
        n = N / 1;
        int a = n % 10;
        if(a >= 5){
            cout << n / 10 + 1 << endl;
        }else{
            cout << n / 10 << endl;
        }
    }
}