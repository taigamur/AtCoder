#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    //vector<string, 4> s = {"ABC","ARC","AGC","AHC"};

    string str[4];
    str[0] = "ABC";
    str[1] = "ARC";
    str[2] = "AGC";
    str[3] = "AHC";

    vector<bool> judge(4,false);

    for(int i = 0; i < 3; i++){
        string t;
        cin >> t;
        for(int j=0;j<4;j++){
            if(t == str[j]){
                judge[j] = true;
            }
        }
    }
    for(int i = 0; i < 4; i++){
        if(judge[i] == false){
            cout << str[i] << endl;
        }
    }

}