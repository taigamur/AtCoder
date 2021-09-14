#include <iostream>
#include <algorithm>
using namespace std;


int main(){

    string S;
    int K;
    cin >> S >> K;
    sort(S.begin(),S.end());

    int i = 1;    
    do{
        if(i == K) cout << S << endl;
        i++;
    }while(next_permutation(S.begin(),S.end()));
}