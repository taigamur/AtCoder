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

    int n;
    cin >> n;

    int a = n / 100;
    int c = n % 10;
    int b = (n % 100) / 10;

    cout << (a + b + c) * 100 + (a + b + c) * 10 + (a + b + c) << endl;


}