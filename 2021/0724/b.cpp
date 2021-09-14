#include <iostream>
using namespace std;

int main(){
    string a,b,c,d;
    a = "H";
    b = "2B";
    c = "3B";
    d = "HR";
    int sum[4];

    for(int i=0;i<4;i++){
        string t;
        cin >> t;
        if(t == a){
            sum[0] = 1;
        }else if(t == b){
            sum[1] = 1;
        }else if(t == c){
            sum[2] = 1;
        }else if(t ==d){
            sum[3] = 1;
        }
    }

    int tmp = 0;
    for(int i=0;i<4;i++){
        if(sum[i] == 1){
            tmp++;
        }
    }
    if(tmp == 4){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}