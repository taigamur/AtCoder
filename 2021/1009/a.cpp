#include <iostream>
using namespace std;

int main(){
    string N;
    cin >> N;

    int t = N.size();
    if(t == 4){
        cout << N << endl;
    }else if(t == 3){
        string a = "0";
        cout << a + N << endl;
    }else if(t == 2){
        string a = "00";
        cout << a + N << endl;
    }else{
        string a = "000";
        cout << a + N << endl;
    }
}