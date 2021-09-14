#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int A,B;
    int C;
    cin >> A >> B >> C;
    if(abs(A)==abs(B)){
        if(C%2==0){
            cout << "=" << endl;
        }else{
            if(A>B){
                cout << ">" << endl;
            }else{
                cout << "<" << endl;
            }
        }
    }
    else if(abs(A)>abs(B)){
        if(C%2==0){
            cout << ">" << endl;
        }else{
            cout << "<" << endl;
        }
    }else if(abs(A)<abs(B)){
        if(C%2==0){
            cout << "<" << endl;
        }else{
            cout << ">" << endl;
        }
    }

    return 0;
}