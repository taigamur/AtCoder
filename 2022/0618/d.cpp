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

    vector<pair<int,int>> A;

    rep(i,0,N){
        pair<int,int> p;
        cin >> p.first >> p.second;

        A.push_back(p);
    }

    sort(A.begin(), A.end());

    vector<pair<int,int>> B;
    pair<int,int> t;
    t = A[0];

    rep(i,1,A.size()){
        if(t.second < A[i].first){
            B.push_back(t);
            t = A[i];
        }else if(t.second < A[i].second){
            t.second = A[i].second;
        }
    }
    B.push_back(t);

    rep(i,0,B.size()){
        cout << B[i].first << " " << B[i].second << endl;
    }
}