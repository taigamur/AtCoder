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

    int N;
    cin >> N;

    vector<pair<int,int>> list(N);
    rep(i,0,N){
        int a,b;
        cin >> a >> b;
        list[i] = make_pair(a,b);
    }

    sort(list.begin(),list.end());

    int ans = 0;
    rep(i,0,N){
        rep(j,i+1,N){
            rep(k,j+1,N){

                double dx1 = list[j].first - list[i].first;
                double dx2 = list[k].first - list[j].first;

                double dy1 = list[j].second - list[i].second;
                double dy2 = list[k].second - list[j].second;

                if(dx2 * dy1 == dx1 * dy2){
                    continue;
                }else{
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;

}