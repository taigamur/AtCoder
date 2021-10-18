#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int N;
    cin >> N;

    if(N % 100 == 0 && N > 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}