#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    
    int N;
    cin >> N;
    int M;
    cin >> M;

    vector<vector<int>> list(N,vector<int>());
    vector<bool> used(N,false);

    for(int i = 0; i < M; i++){
        int a,b;
        cin >> a >> b;
        list[b].push_back(a);
    }

    for(int i = 0; i < N; i++){
        for(int i = 0; i < )
    }
}