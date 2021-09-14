#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int N;
    cin >> N;

    int t,min,max;
    double a[2][N];
    for(int i=0;i<N;i++){
        cin>> t >> min >> max;
        if(t==1){
            a[0][i] = min;
            a[1][i] = max;
        }else if(t==2){
            a[0][i] = min;
            a[1][i] = max-0.5;
        }else if(t==3){
            a[0][i] = min+0.5;
            a[1][i] = max;
        }else if(t==4){
            a[0][i] = min+0.5;
            a[1][i] = max-0.5;
        }
    }

    int total=0;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if((a[0][i] <= a[1][j]&&a[0][j]<=a[1][i]) || (a[0][j] <= a[1][i]&& a[0][i]<=a[1][j]) ){
                total++;
            }
        }
    }
    cout << total << endl;

    return 0;
}

