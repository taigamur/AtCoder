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

    int a,b,c;

    cin >> a >> b >> c;

    if(a <= b){
        if(a <= c && c < b){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        if((a <= c && c < 24) || (0 <= c  && c < b)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

}