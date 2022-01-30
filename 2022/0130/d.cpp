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
    string ans = "0";
    int N;
    cin >> N;
    string str;
    cin >> str;
    stack<int> que;
    queue<int> q;
    que.push(0);

    rep(i,0,N){
        if(str[i] == 'L'){
            que.push(i+1);
        }else{
            int t = que.top();
            que.pop();
            q.push(t);
            que.push(i+1);
        }
    }

    while(q.size() != 0){
        cout << q.front() << " ";
        q.pop();
    }

    while(que.size() != 0){
        int t = que.top();
        cout << t << " ";
        que.pop();
    }
    cout << endl;
}