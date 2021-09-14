#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int A,B,C;

    cin >> A >> B >> C;

    if(A > B){
        if(B > C){
            cout << A+B << endl;
        }else{
            cout << A+C << endl;
        }
    }else{
        if(A > C){
            cout << A+B << endl;
        }else{
            cout << B+C << endl;
        }
    }


    return 0;
}