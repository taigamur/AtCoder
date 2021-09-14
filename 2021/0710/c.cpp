#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;


int main(){

    int n;
    cin >> n;

    vector<long long> a(n);
    for(auto& x : a)cin >> x;
    sort(begin(a),end(a));
    long long in , out;
    long long total = 1;
    int dif;

    in = a[0];
    long long t = 10^9 + 7;

    for(int i=0;i<n;i++){
    
        if(i!=0 && (a[i]-out)>0){
            dif = a[i] - out;
            in = in + dif;
        }
        if(a[i]>0){
            total = total * in % t;
            out = a[i];
            in--;
        }

        // if(floor(total/t)>0){
        //     int l = floor(total/t);
        //     total = total - t*l;
        // }
    }
    
    cout << total % t << endl;



    return 0;
}

