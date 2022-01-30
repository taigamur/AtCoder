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

bool judge(string s){
    for(int i = 0; i < s.size()/2; i++){
        if(s[i] == s[s.size()-i-1]){

        }else{
            return false;
        }
    }
    return true;
}

int main(){
    string S;
    cin >> S;
    

    ll l = S.size();
    while(1){
        if(S[l-1] == 'a'){
            l--;
        }else{
            break;
        }
    }

    ll m = 0;
    while(1){
        if(S[m] == 'a' && m < ){
            m++;
        }else{
            break;
        }
    }

    string T = S.substr(m,l-m);
    if(judge(T)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    

}