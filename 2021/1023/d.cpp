#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <map>
using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){

    int M;
    cin >> M;

    vector<vector<int>> G(10,vector<int>(10));

    rep(i,0,M){
        int a,b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }

    vector<int> list(9,8);
    rep(i,0,8){
        int a;
        cin >> a;
        list[a-1] = i;
    }


    vector<vector<int>> que(1000,vector<int>(9));
    int siz = 0;

    map<vector<int>,int > m;
    int cnt = 1;
    int z;

    for(int i = 0; i < 9; i++){
        if(list[i] == 8){
            z = i;
            break;
        }
    }
    
    for(auto e : G[z]){
        vector<int> cp(9);
        cp = list;
        cp[z] = cp[e];
        cp[e] = z;
        que.push_back(cp);
        m[cp] = cnt;
        siz++;
    }
    cnt++;
    int p = 0;
    while(siz-p >= 0){

        vector<int> cp(9);
        cp = que[p];
        int j;
        for(int i = 0; i < 9; i++){
            if(cp[i] == 8){
                j = i;
                break;
            }
        }
        for(auto e : G[j]){
            vector<int> cp2(9);
            cp2 = cp;
            cp2[j] = cp[e];
            cp2[e] = 8;
            que.push_back(cp2);

            if(m[cp2] < cnt){
                continue;
            }else{
                m[cp] = cnt;
                siz++;
            }
            
        }
        cnt++;
        p++;
    }

    vector<int> a(9);
    for(int i = 0; i < 9; i++){
        a[i] = i;
    }
    int ans = m[a];
    cout << ans << endl;

}