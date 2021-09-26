#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
const long long INF = 1LL << 60; 
typedef long long ll;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    for(int i = a; i <= b; i++){
        if(i % c == 0){
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}