#include <iostream>
using namespace std;


int main(){
    int N;

    cin >> N;
    int a[N];
    int count=0;
    for(int i=0;i<N;i++){
        cin >> a[i];
        for(int j=0;j<i;j++){
            if(a[i] != a[j]){
                count++;
            }
        }
    }


    cout << count << endl;

    return 0;
}