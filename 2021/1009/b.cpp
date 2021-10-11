#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p;
    cin >> p;

    int ans = 0;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        if(t < p){
            ans++;
        }
    }
    cout << ans << endl;
}