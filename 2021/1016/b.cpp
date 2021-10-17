#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int T;
  cin >> T;

  for(int i = 0; i < T; i++){

      vector<int> color(3,0);
      int a,b,c;
      for(int i = 0; i < 3; i++){
          cin >> a;
          color[i] = a;
      }
      bool j = false;
      
      a = color[0];
      b = color[1];
      c = color[2];
    //   if(a == b){
    //       cout << a << endl;
    //   }else if(a == c){
    //       cout << a << endl;
    //   }else if(b == c){
    //       cout << b << endl;
    //   }else{
          sort(color.begin(),color.end());

          int s = color[2] - color[1];
          int t = color[1] - color[0];
          int u = color[2] - color[0];

          int m = 100000000;
          int v = m;
          int w = m;
          int x = m;
          if(s % 3 == 0){
              if(color[0] >= s / 3) v = color[2] ;
          }

          if(t % 3 == 0){
              if(color[2] >= t / 3) w = color[1] ;
          }
          if(u % 3 == 0){
              if(color[1] >= u / 3) x = color[2] ;
          }

          if(v < m || w < m || x < m){
            if(v < w && v < x){
                cout << v << endl;
            }else if(w < x && w < v){
                cout << w << endl;
            }else{
                cout << x << endl;
            }
          }else{
              cout << "-1" << endl;
          }

    //   }
      

      

      

      
  }


}