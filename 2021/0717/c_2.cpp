#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n,k;
    cin >> n >> k;
    vector<int> c(n);
    for(auto& x : c)cin >> x;

    queue<int> que(k);
    int max = 1;
    for(int i=0;i<k;i++){
        que.push(c[i]);
    }

    for(int i=k;i<n-k+1;i++){

        int t = que.pop();

        if(t == c[i]){

        }else{
            
        }


        if(val > max){
            max = val;
        }
    }



    cout << max << endl;
}