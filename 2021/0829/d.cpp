#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N , M;
    cin >> N >> M;

    vector<vector<int>> a;
    for(int i=0;i<M;i++){
        int k;
        cin >> k;
        for(int j=0; j < k; j++){
            int t;
            cin >> t;
            a[k-1].push(t);
        }
    }

    for(int i=0; i < N; i++){
        a.erase(unique(a[0].top(),a[a.si)
    }
}