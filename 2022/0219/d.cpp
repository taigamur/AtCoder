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


bool judge(int n){
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    

    vector<int> list;
    list.push_back(a+c);
    for(int i = a+c+1; i < b+c; i++){
        if(judge(i)){
            list.push_back(i);
            // cout << i << endl;
        }
    }
    list.push_back(b+c);

    int range = 0;
    for(int i = 1; i < list.size(); i++){
        range = max(range, list[i] - list[i-1]);
    }


    if(range - 2 < d - c && list.size() > 2){
        cout << "Aoki" << endl;
        return 0;
    }else{
        cout << "Takahashi" << endl;
    }


}