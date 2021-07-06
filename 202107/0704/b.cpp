#include <iostream>
#include <cmath>
using namespace std;

int calc(int N){
    int sum = 1;
    for(int i=1;i<=N;i++){
        sum *= i;
    }
    return sum;
}

int main(){

    int n;
    cin >> n;
    int i = 10;
    int c;
    int count = 0;
    while(n!=0){
        c = calc(i);
        if(n>=c){
            n = n - c;
            count++;
        }else{
            i--;
        }
    }

    cout << count << endl;

    return 0;
}

