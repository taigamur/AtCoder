#include <iostream>
using namespace std;

double avg(int* pT);

int calc(int N,int *A,int sum,int tf);
int main(){

    int N;
    cin >> N;

    int A[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    int sum=0;

    sum = calc(N,A,sum,1);
    cout << sum << endl;
    return 0;
}

int calc(int N,int *A,int sum,int tf){
    //+ 1, - 0
    if(tf == 1){
        if(N>0){
        calc(N-1,A,sum,1);
        calc(N-1,A,sum,0);
        }
        if(N==0){
            sum = sum+A[N-1];
            sum = sum+A[N-1];
        }else{
            sum = sum+A[N-1];
            sum = sum-A[N-1];
        }
    }else{
        if(N>0){
        calc(N-1,A,sum,1);
        }
        sum = sum + A[N-1];
    }
    return sum;

    
}