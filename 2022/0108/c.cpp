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

    ll K;
    cin >> K;

    vector<ll> list;
    int sum = 0;
    while(K > 0){
        list.push_back(K % 2);
        K = K / 2;
        // cout << K;
        sum++;
    }
    for(int i = sum-1; i >= 0; i--){
        // cout << list[i-1];
        if(list[i] == 1){
            cout << 2;
        }else{
            cout << 0;
        }
    }
    cout << endl;
}