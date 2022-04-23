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

class Edge{
    public: 
    int t, w;
    Edge();
    Edge(int t, int w): t(t), w(w){};
};
// vector<Edge> G[MAX];



int main(){
    ll N;
    cin >> N;

    vll A(N);
    rep(i,0,N) cin >> A[i];

    sort(A.begin(), A.end());

    int M = A[A.size()-1];

    vll val(N);
    vll siz(N);

    int cnt = 0;
    val[0] = A[0];
    siz[0] = 1;
    rep(i,1,N){
        if(A[i] == A[i-1]){
            siz[cnt] += 1;

        }else{
            cnt++;
            val[cnt] = A[i];
            siz[cnt] = 1;
        }
    }
    cnt++;

    ll ans = 0;
    int f = 0;
    rep(i,0,cnt){
        if(val[i] * val[i] > M) break;
        rep(j,i,cnt){
            ll t = val[i] * val[j];
            
            if(t <= M){
                int index = find(val.begin(), val.end(), t) - val.begin();
                if(index != cnt){
                    if(i == j){
                        ans += siz[i] * siz[j] * siz[index];
                    }else{
                        ans += 2 * siz[i] * siz[j] * siz[index];
                    }
                }
            }else{
                break;
            }
        }
    }


    cout << ans << endl;





}