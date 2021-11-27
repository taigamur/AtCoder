#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <cmath>

using namespace std;

typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){

    int N;
    cin >> N;
    int k;
    cin >> k;

    vector<int> point(N);

    rep(i,0,N){
        int sum = 0;
        rep(j,0,3){
            int t;
            cin >> t;
            sum += t;
        }
        point[i] = sum;
    }

    vector<int> point_sort(N);
    point_sort = point;

    sort(point_sort.begin(),point_sort.end(),greater<int>());

    rep(i,0,N){
        if(point[i] + 300 >= point_sort[k-1]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}