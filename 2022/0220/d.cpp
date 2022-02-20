#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <math.h>
#include <iomanip>
#include <limits>
#include <stack>
using namespace std;

typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

#define SIZE 10005
struct Node{
    int right, left, parent;
};
struct Node node[SIZE];

stack<pair<int,int>> list;


int main(){
    int N;
    cin >> N;

    vector<int> ans;

    rep(i,0,N){
        int a;
        cin >> a;

        pair<int,int> p;
        if(list.size() == 0){
            p.first = a;
            p.second = 1;
            list.push(p);
        }else{
            pair<int,int> t = list.top();
            if(t.first == a && t.second == a-1){

                rep(i,0,a-1){
                    list.pop();
                }

            }else if(t.first == a){
                p.first = a;
                p.second = t.second + 1;
                list.push(p);
            }else{
                p.first = a;
                p.second = 1;
                list.push(p);
            }
        }

        ans.push_back(list.size());
    }

    rep(i,0,N){
        cout << ans[i] << endl;
    }
}