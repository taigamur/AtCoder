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
    int N,Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    deque<pair<int,int>> deq;

    rep(i,0,S.size()){
        pair<int,int> p;
        p.first = S[i] - '0';
        p.second = 1;
        dep.push_back(p);
    }

    vector<pair<string,int>> list;
    vector<list>

    rep(i,0,Q){
        int a,b;
        cin >> a >> b;
        if(a == 1){

        }else{

        }
    }


}