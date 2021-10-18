#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <iomanip>
using namespace std;
typedef long long ll;

int main(){
    
    int N;
    cin >> N;

    vector<double> a(N);
    vector<double> b(N);

    double a_sum = 0;
    double b_sum = 0;
    double sec = 0;
    for(int i = 0; i < N; i++){
        cin >> a[i];
        cin >> b[i];
        a_sum += a[i];
        b_sum += b[i];
        sec += a[i]/b[i];
    }

    sec = sec / 2;

    double ans = 0;
    for(int i = 0; i < N; i++){
        if(sec >= a[i]/b[i]){
            ans += a[i];
            sec -= a[i]/b[i];
        }else{
            ans += sec*b[i];
            cout << fixed << setprecision(10) << ans << endl;
            return 0;
        }
    }
}