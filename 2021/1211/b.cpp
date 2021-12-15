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
    int N;
    cin >> N;
    vector<pair<int,string>> list(100);
    int n = 0;
    rep(i,0,N){
        string t;
        cin >> t;
        int j = 0;
        for(int i = 0; i < n; i++){
            if(list[i].second == t){
                list[i].first++;
                j = 1;
            }
        }
        if(j == 0){
            list[n].first = 1;
            list[n].second = t;
            n++;
        }
    }
    int m = 0;
    string ans;
    for(int i = 0; i < n; i++){
        if(list[i].first > m){
            m = list[i].first;
            ans = list[i].second;
        }
    }
    cout << ans << endl;


}