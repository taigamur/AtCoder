#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <math.h>
#include <iomanip>
#include <limits>
using namespace std;

typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

#define SIZE 10005
struct Node{
    int right, left, parent;
};
struct Node node[SIZE];


int main(){
    ll n;
    cin >> n;

    // cout << setprecision(10) << floor(n/10) << endl;
    if(n >= 0){
        cout << n / 10 << endl;
    }else{
        if(n % 10 == 0){
            cout << n / 10 << endl;
        }
        else{
            cout << n / 10 - 1 << endl;
        }
        
    }
    

}