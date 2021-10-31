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
    string s;
    cin >> s;
    int sum = 0;
    if(s[0] == s[1]){
        sum++;
    }
    if(s[1] == s[2]){
        sum++;
    }
    if(s[0] == s[2]){
        sum++;
    }

    if(sum == 0){
        cout << 6 << endl;
    }

    if(sum == 1){
        cout << 3 << endl;
    }
    if(sum == 3){
        cout << 1 << endl;
    }

}