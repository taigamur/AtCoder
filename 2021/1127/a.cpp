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

    string s1;
    string s2;
    cin >> s1;
    cin >> s2;

    if((s1[0] == '#' && s1[1] == '#') ||
       (s2[0] == '#' && s2[1] == '#') ||
       (s1[0] == '#' && s2[0] == '#') ||
       (s1[1] == '#' && s2[1] == '#')
    ){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}