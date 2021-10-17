#include <iostrea>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N; 
    vector<int> a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    vector<vector<int>> dp(N,vector<int>(N,0));
    for(int i = 1; i < N; i++){
        for(int j= 0; j < N - i; j++){
            int max = max(dp[i][i+j-1],dp[i+j][i+j]);
            
        }
    }
}