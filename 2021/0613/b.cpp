#include <iostream>
using namespace std;


int main(){
    int N;
    cin >> N;
    int i=0;
    int A[N];
    while(i<N){
        cin >> A[i];
        i++; 
    }

    int B[N];
    for(int i=0;i<N;i++){
        B[i] = 0;
    }
    for(int i=0;i<N;i++){
        B[A[i]-1] = 1;
    }

    for(int i=0;i<N;i++){
        if(B[i]==0){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}