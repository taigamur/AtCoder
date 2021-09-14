#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    
    int N;
    cin >> N;
    string s;
    cin >> s;

    if(s[N-1] == 'o'){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}