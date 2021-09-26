#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
const long long INF = 1LL << 60; 
typedef long long ll;

int main(){
    ll k;
    cin >> k;
    ll a,b;
    cin >> a >> b;

    ll c = 0;
    ll d = 0;

    int sum = 0;
    while(a != 0){
        
        ll t = a % 10;
        c += t * pow(k,sum);
        sum++;
        a = a / 10;
    }

    sum = 0;
    while(b != 0){
        ll t = b % 10;
        d += t * pow(k,sum);
        sum++;
        b = b / 10;
    }
    cout << c * d << endl;




}