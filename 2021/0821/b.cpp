#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    unsigned long long N;
    cin >> N;

    unsigned long long k = 0;
    unsigned long long sum = 1;
    while(sum <= N){
        sum = sum*2;
        k++;
    }
    cout << k-1 << endl;
}