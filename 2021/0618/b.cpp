#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int N;

    cin >> N;
    int total=0;
    int i=1;
    while(total<N){
        total = total+i;
        i++;
    }
    cout << i -1 << endl;
    return 0;
}