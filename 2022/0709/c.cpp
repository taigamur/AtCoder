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

int main(){
    string S,T;
    cin >> S >> T;

    vector<pair<char,int>> A;
    vector<pair<char,int>> B;

    int sum = 1;
    pair<char,int> p;
    rep(i,1,S.size()){
        if(S[i] == S[i-1]){
            sum++;
        }else{
            p.first = S[i-1];
            p.second = sum;
            A.push_back(p);
            sum = 1;
        }
    }
    p.first = S[S.size()-1];
    p.second = sum;
    A.push_back(p);




    sum = 1;
    rep(i,1,T.size()){
        if(T[i] == T[i-1]){
            sum++;
        }else{
            p.first = T[i-1];
            p.second = sum;
            B.push_back(p);
            sum = 1;
        }
    }
    p.first = T[T.size()-1];
    p.second = sum;
    B.push_back(p);
    


    if(A.size() != B.size()){
        cout << "No" << endl;
        return 0;
    }

    rep(i,0,A.size()){
        if(A[i].first != B[i].first){
            cout << "No" << endl;
            return 0;
        }else{
            if(A[i].second == B[i].second){
                continue;
            }else{
                if(A[i].second < B[i].second && A[i].second >= 2){
                    continue;
                }else{
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Yes" << endl;
    return 0;

}