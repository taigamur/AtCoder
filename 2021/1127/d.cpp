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

    string S;
    cin >> S;
    int K;
    cin >> K;

    vector<pair<int,int>> list(S.size());

    int ans = 0;
    pair<int,int> p;
    if(S[0] == 'x'){
        p.first = 1;
        p.second = 0;
    }else{
        p.first = 1;
        p.second = 1;
    }
    list[0] = p;

    for(int i = 0; i < S.size(); i++){
        for(int j = i + 1; j < S.size(); j++){
            if()
        }
    }
}