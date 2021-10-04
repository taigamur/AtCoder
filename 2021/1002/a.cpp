#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;


int main(){
    int a,b;
    cin >> a >> b;
    int t = a - b;

    cout << setprecision(20);
    cout << pow(32,t)  << endl;
}