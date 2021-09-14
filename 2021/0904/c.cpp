#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> ans(N);

    for(int i=1; i <= N; i++){
        int t;
        cin >> t;

        ans[t-1] = i;

    }

    for(int i=0; i<N-1; i++){
        cout << ans[i] << " ";
    }
    cout << ans[N-1] << endl;
}