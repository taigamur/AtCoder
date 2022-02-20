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

int N;
int X;
int ans = 0;
vector<int> list;




int main(){
    cin >> N;
    cin >> X;
    int sum = 0;
    rep(i,0,N){
        int a,b;
        cin >> a >> b;
        if(a > b){
            int t = a;
            a = b;
            b = a;
        }
        sum += a;
        list.push_back(b - a);
    }

    if(sum > X){
        cout << "No" << endl;
        return 0;
    }else{
        X = X - sum;
        set<int> list1;
        list1.insert(0);
        rep(i,0,N){
            auto itr = list1.begin();
            vector<int> tmp;
            while(itr != list1.end()){
                tmp.push_back(*itr);
                itr++;
            }
            rep(j,0,tmp.size()){
                list1.insert(tmp[j]+list[i]);
            }
        }

        auto itr = list1.begin();
        while(itr != list1.end()){
            if(*itr == X){
                cout << "Yes" << endl;
                return 0;
            }
            itr++;
        }
        cout << "No" << endl;

    }

   
}