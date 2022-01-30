#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>

using namespace std;

typedef long long ll;
int inf = numeric_limits<int>::max();
ll INF = numeric_limits<ll>::max();

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

bool judge(){
    
}

int main(){
    ll X;
    cin >> X;

    ll t = X;
    int N = 0;
    while(t > 0){
        t = t / 10;
        N++;
    }
    vector<int> list(N);
    for(int i = N-1; i >= 0; i--){
        list[i] = X % 10;
        X = X / 10;
    }

    int dif = list[0] - list[1];
    // test1
    int ans = 0;
    for(int i = 1; i < N-1; i++){
        if(list[i] - list[i+1] == dif){

        }else{
            ans = 1;
        }
    }
    if(ans == 0){
        rep(i,0,N) cout << list[i];
        cout << endl;
        return 0;
    }

    //test2
    rep(i,1,N){

    }



    //test3

}