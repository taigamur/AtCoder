#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <map>
#include <math.h>
#include <iomanip>
#include <limits>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;

int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
static const int MAX = 100005;
#define SIZE 10005

struct Node{
    int right, left, parent;
};
// struct Node node[SIZE];

int main(){
    int N;
    cin >> N;

    if(N < 60){
        if(N < 10) cout << "21:0" << N << endl;
        else cout << "21:" << N << endl;
    }else{
        N -= 60;
        if(N < 10) cout << "22:0" << N << endl;
        else cout << "22:" << N << endl;
    }

}