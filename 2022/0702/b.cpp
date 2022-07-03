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
    ll N;
    cin >> N;

    vector<vector<ll>> A(2*N+5,vector<ll>(2*N+5,0));

    rep(i,0,N){
        string s;
        cin >> s;
        rep(j,0,N){
            ll a = s[j] - '0';

            A[i][j] = a;
            A[i+N][j] = a;
            A[i][j+N] = a;
            A[i+N][j+N] = a;
        }
    }

    ll ans = 0;
    rep(i,0,N){
        rep(j,0,N){
            ll sum1 = 0;
            ll sum2 = 0;
            ll sum3 = 0;
            rep(k,0,N){
                sum1 *= 10; 
                sum1 += A[i][j+k];
                sum2 *= 10; 
                sum2 += A[i+k][j];
                sum3 *= 10; 
                sum3 += A[i+k][j+k];
            }
            if(sum1 > ans) ans = sum1;
            if(sum2 > ans) ans = sum2;
            if(sum3 > ans) ans = sum3;

        }
    }

    rep(i,0,N){
        rep(j,N,2*N){
            ll sum1 = 0;
            ll sum2 = 0;
            rep(k,0,N){
                sum1 *= 10;
                sum1 += A[i+k][j-k];
                sum2 *= 10;
                sum2 += A[i][j-k];
            }
            if(sum1 > ans) ans = sum1;
            if(sum2 > ans) ans = sum2;
        }
    }

    rep(i,N,2*N){
        rep(j,N,2*N){
            ll sum1 = 0;
            ll sum2 = 0;
            rep(k,0,N){
                sum1 *= 10;
                sum1 += A[i-k][j];
                sum2 *= 10;
                sum2 += A[i-k][j-k];
            }
            if(sum1 > ans) ans = sum1;
            if(sum2 > ans) ans = sum2;
        }
    }
    
    rep(i,N,2*N){
        rep(j,0,N){
            ll sum = 0;
            rep(k,0,N){
                sum *= 10;
                sum += A[i-k][j+k];
            }
            if(sum > ans) ans = sum;
        }
    }
    cout << ans << endl;
    return 0;
}