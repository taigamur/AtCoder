#include <iostream>
#include <vector>
using namespace std;


int main(){

    int n;
    cin >> n;

    string a;
    cin >> a;

int count = 0;
for(int i = 0; i <n; i++){
    char ch = a[i];

    if(ch  == '1'){
        if(count%2 == 0){
            cout << "Takahashi" << endl;
        }else{
            cout << "Aoki" << endl;
        }
        return 0;
    }
    count++;
}



    return 0;
}

