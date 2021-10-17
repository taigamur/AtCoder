#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

  int N;
  cin >> N;

  vector<long long> val(N+1,0);
  for(int i = 1; i <= N; i++){
    long long t;
    cin >> t;
    val[i] = t;
  }


  vector<int> ans(N+1,0);
  vector<double> gold(N+1);
  gold[0] = 1;
  gold[1] = 1;
  ans[1] = 0;
  ans[2] = 0;

  for(int i = 2; i <= N; i++){

    if( val[i-1] > val[i]){
        ans[i-1] = 1;
        ans[i] = 1;
    }else{
        ans[i] = 0;
    }


  }

  for(int i = 1; i < N; i++){
    cout << ans[i] << " ";
  }
  cout << ans[N] << endl;


}