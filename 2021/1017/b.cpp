#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;

    string ans = s;
    string ans2 = s;
    for(int i = 1 ; i < s.size(); i++){
        string t;
        for(int j = i; j < s.size();j++){
            t = t + s[j];
        }
        for(int j = 0; j < i; j++){
            t = t + s[j];
        }


        if(t < ans){
            ans = t;
        }
        if(t > ans2){
            ans2 = t;
        }
    }

    cout << ans << endl;
    cout << ans2 << endl;
}