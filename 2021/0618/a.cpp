#include <iostream>
#include <cmath>
using namespace std;


int main(){
    double A;

    cin >> A;
    A = floor(A*1.08);

    if(A<206){
        cout << "Yay!" << endl;
    }else if(A == 206){
        cout << "so-so" << endl;
    }else{
        cout << ":(" << endl;
    }

    return 0;
}