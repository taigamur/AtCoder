#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int A,B,C,D;

    cin >> A >> B >> C >> D;

    if(B >= C*D){
        cout << -1 << endl;
        return 0;
    }

    int t = C*D - B;

    int i = 0;
    while(t*i < A){
        i++;
    }
    cout << i << endl;


    return 0;
}