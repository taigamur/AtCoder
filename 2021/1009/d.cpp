#include <iostream>
#include <vector>
using namespace std;
typedef unsigned long long ull;


int calc(int a){
    int ans = 1;
    for(int i = 1; i <= a; i++){
        ans = ans * i;
    }
    return ans;
}
int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }

    ull ans = 1;
    for(int i = 0; i < N-1; i++){
        ull t = 0;
        if(B[i] - A[i+1] >= 0){
            t = B[i] - A[i+1] + 1;
        }

        if(B[i+1] - B[i] > 0){
            t += (B[i+1] - B[i]) * (B[i]-A[i]+1);
        }

        if(A[i] != A[i+1]){
            t -= calc(A[i+1] - A[i]);
        }

        ans = ans * t;
        ans = ans % 998244353;
    }
    cout << ans << endl;
}