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


int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    vector<pair<ll,ll>> list(8);

    list[0] = make_pair(a+1,b+2);
    list[1] = make_pair(a+1,b-2);
    list[2] = make_pair(a+2,b+1);
    list[3] = make_pair(a+2,b-1);
    list[4] = make_pair(a-1,b+2);
    list[5] = make_pair(a-1,b-2);
    list[6] = make_pair(a-2,b+1);
    list[7] = make_pair(a-2,b-1);

    rep(i,0,8){
        if(c+1 == list[i].first && d+2 == list[i].second){
            cout << "Yes" << endl;
            return 0;
        }
    }
    rep(i,0,8){
        if(c+1 == list[i].first && d-2 == list[i].second){
            cout << "Yes" << endl;
            return 0;
        }
    }
    rep(i,0,8){
        if(c+2 == list[i].first && d+1 == list[i].second){
            cout << "Yes" << endl;
            return 0;
        }
    }
    rep(i,0,8){
        if(c+2 == list[i].first && d-1 == list[i].second){
            cout << "Yes" << endl;
            return 0;
        }
    }
    rep(i,0,8){
        if(c-1 == list[i].first && d+2 == list[i].second){
            cout << "Yes" << endl;
            return 0;
        }
    }
    rep(i,0,8){
        if(c-1 == list[i].first && d-2 == list[i].second){
            cout << "Yes" << endl;
            return 0;
        }
    }
    rep(i,0,8){
        if(c-2 == list[i].first && d+1 == list[i].second){
            cout << "Yes" << endl;
            return 0;
        }
    }

    rep(i,0,8){
        if(c-2 == list[i].first && d-1 == list[i].second){
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    return 0;

}