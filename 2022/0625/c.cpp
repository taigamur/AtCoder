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
    string S;
    cin >> N;
    cin >> S;

    vll A;
    vll C;

    rep(i,0,N){
        ll t;
        cin >> t;

        if(S[i] == '1'){
            A.push_back(t);
        }else{
            C.push_back(t);
        }
    }

    sort(A.begin(),A.end());
    sort(C.begin(),C.end());


    ll ans = max(A.size(),C.size());

    rep(i,0,A.size()){

        int t = lower_bound(C.begin(),C.end(),A[i]) - C.begin();


        ll sum = A.size() - i +  t ;
        
        if(sum > ans) ans = sum;
    }



    cout << ans << endl;

    

}