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
    if(N < pow(2,31) && N >= -pow(2,31)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}