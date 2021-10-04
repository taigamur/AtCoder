#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s,t;
    cin >> s;
    cin >> t;

    if(s == t){
        cout << "Yes" << endl;
        return 0;
    }else{
        if(s.size() == t.size()){
            for(int i = 0; i < s.size()-1; i++){
                string u = s;
                char l = u[i];
                u[i] = u[i+1];
                u[i+1] = l;
                if(u == t){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

}