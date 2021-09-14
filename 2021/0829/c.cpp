#include <iostream>
using namespace std;

int main(){
    unsigned long long N;
    cin >> N;

    string s[120];
    int i = 0;

    while(N > 0){
        if(N%2 == 0){
            s[i] = "B";
            N = N / 2;
        }else{
            s[i] = "A";
            N--;
        }
        i++;
    }

    for(int t = i-1 ; t >= 0; t--){
        cout << s[t];
    }
    cout << endl;
}