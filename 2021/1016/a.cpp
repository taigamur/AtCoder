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

  double t = 100000000;
  for(int i = 2; i <= N; i++){
    double a = gold[i-1]; //前日をそのまま使う
    double b = gold[i-2]*val[i-1]/val[i];
    double c = gold[i-2];

    if()

    if(a >= b && a >= c){
      gold[i] = a;
      ans[i] = 0;
    }else if(b > a && b > c){
      gold[i] = b;
      ans[i-1] = 1;
      ans[i] = 1;
    }else{
      gold[i] = b;
      ans[i-1] = 0;
      ans[i] = 0;
    }


    if(gold[i] > t){
      gold[i] = gold[i] - t;
    }


  }

  for(int i = 1; i < N; i++){
    cout << ans[i] << " ";
  }
  cout << ans[N] << endl;


}