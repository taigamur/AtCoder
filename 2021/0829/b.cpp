#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    string s[N];
    string t[N];
    for(int i=0;i<N;i++){
        cin >> s[i] >> t[i];
    }

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(s[i] == s[j] && t[i] == t[j]){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}