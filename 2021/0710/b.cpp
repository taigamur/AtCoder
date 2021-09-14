#include <iostream>
using namespace std;


int main(){

    int n,x;
    cin >> n >> x;
    int total=0;

    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        if(i%2==0){
            total = total + a - 1;
        }else{
            total = total + a;
        }
    }
    if(total <= x){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}

