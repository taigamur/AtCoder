#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){
    string s;
    cin >> s;
    if(s[s.size()-1] == 'r' && s[s.size()-2] == 'e'){
        cout << "er" << endl;
    }else{
        cout << "ist" << endl;
    }

}