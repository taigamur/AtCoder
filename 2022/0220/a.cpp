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
    int n;
    int a,b;
    cin >> a >> b;

    if(a < b){
        int t = a;
        a = b;
        b = t;
    }

    if(a -b  == 1){
        cout << "Yes" << endl;
    }else if(a == 10 && b == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    

}