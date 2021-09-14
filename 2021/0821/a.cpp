#include <iostream>
#include <vector>
using namespace std;

int main(){

    string a = "Hello,World!";
    string S;
    cin >> S;
    if(S.size() == 12){
        for(int i=0; i<12; i++){
            if(S[i] == a[i]) continue;
            else cout << "WA" << endl;
            return 0;
        }
        cout << "AC" << endl;
    }else{
        cout << "WA" << endl;
    }
}