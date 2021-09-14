#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    
    string s[26];
    for(int i = 0; i < 26; i++){
        int t;
        cin >> t;

        s[i] = 96 + t;
    }

    for(int i = 0; i < 26; i++){
        cout << s[i];
    }
    cout << endl;
}