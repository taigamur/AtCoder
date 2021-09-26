#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;
const long long INF = 1LL << 60; 
typedef long long ll;



int main(){
    int n;
    cin >> n;
    queue<int> list;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        list.push(t);
    }


    vector<ll> ans(10,0);

    int t = list.front();
    list.pop();
    int s = list.front();
    list.pop();

    ans[(t+s)%10]++;
    ans[(t*s)%10]++;

    while(!list.empty()){

        int next = list.front();
        list.pop();
        vector<ll> top(10,0);
        for(int i = 0; i < 10; i++){
            int f = (i + next) % 10;
            int g = (i * next) % 10;
            top[f] += ans[i] % 998244353;
            top[g] += ans[i] % 998244353;
        }
        ans = top;
    }

    //結果
    for(int i = 0; i < 10; i++){
        cout << ans[i] % 998244353 << endl;
    }

}