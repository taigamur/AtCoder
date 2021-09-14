#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float t;
    cin >> t;

    float x = floor(t);
    float y = (t - x) * 10;

    if(y >= 0 && y <= 2){
        cout << x << "-" << endl;
    }else if(y>=3 && y <= 6){
        cout << x << endl;
    }else{
        cout << x << "+" << endl;
    }
}