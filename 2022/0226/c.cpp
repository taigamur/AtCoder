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

vector<vector<int>> mp(1005,vector<int>(1005));
int N;

int main(){
    cin >> N;

    rep(i,0,N+3){
        rep(j,0,N+3){
            mp[i][j] = 0;
        }
    }
    

    string str;
    rep(i,0,N){
        cin >> str;
        rep(j,0,N){
            if(str[j] == '.') mp[i][j] = 0;
            else mp[i][j] = 1;
        }
    }

    
    int ans = 0;
    for(int i = 0; i < N; i++){
        int cnt = 0;

        for(int j = 0; j < 6; j++){
            if(mp[i][j] == 1) cnt++;
        }
        ans = max(ans, cnt);
        for(int j = 6; j < N; j++){
            if(mp[i][j] == 1 && mp[i][j-6] == 0){
                cnt++;
            }else if(mp[i][j] == 0 && mp[i][j-6] == 1){
                if(cnt != 0) cnt--;
            }

            ans = max(ans, cnt);
        }
    }

    for(int i = 0; i < N ; i++){
        int cnt = 0;
        for(int j = 0; j < 6; j++){
            if(mp[j][i] == 1) cnt++;
        }
        ans = max(ans, cnt);
        for(int j = 6; j < N; j++){
            if(mp[j][i] == 1 && mp[j-6][i] == 0){
                cnt++;
            }else if(mp[j][i] == 0 && mp[j-6][i] == 1){
                if(cnt != 0) cnt--;
            }
            ans = max(ans, cnt);
        }
    }

    for(int i = 0; i < N-5; i++){
        int cnt = 0;

      

        for(int j = 0; j < 6; j++){
            if(mp[i+j][j] == 1) cnt++;
        }
        ans = max(ans, cnt);
        for(int j = 6; j < N && i+j<N; j++){
            if(mp[i+j][j] == 1 && mp[i+j-6][j-6] == 0){
                cnt++;
            }else if(mp[i+j][j] == 0 && mp[i+j-6][j-6] == 1){
                if(cnt != 0) cnt--;
            }
            ans = max(ans, cnt);
        }
    }

    for(int i = N - 1; i >= 5; i--){
        int cnt = 0;
        for(int j = 0; j < 6; j++){
            if(mp[i-j][j] == 1) cnt++;
        }
        ans = max(ans, cnt);
        for(int j = 6; j < N && i - j >= 0; j++){
            if(mp[i-j][j] == 1 && mp[i-j+6][j-6] == 0){
                cnt++;
            }else if(mp[i-j][j] == 0 && mp[i-j+6][j-6] == 1){
                if(cnt != 0) cnt--;
            }
            ans = max(ans, cnt);
        }
    }

    if(ans >= 4){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}