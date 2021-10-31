#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){
    vector<vector<int>> map(55,vector<int>(55));

    int h,w;
    cin >> h >> w;
    for(int i = 0; i < h; i++){
        rep(j,0,w){
            cin >> map[i][j];
        }
    }

    rep(i,0,h){
        rep(j,i+1,h){


            rep(k,0,w){
                rep(l,k+1,w){
                    if(map[i][k] + map[j][l] <= map[j][k] + map[i][l]){
                        continue;
                    }else{
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }


        }
    }
    cout << "Yes" << endl;

}