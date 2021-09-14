#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool search(int k, vector<int> &a,int l){
    for(int i=0;i<k;i++){
        if(a[i] == l){
            return false;
        }
    }
    return true;
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> c(n);
    for(auto& x : c)cin >> x;

    int max = 1;


    for(int i=0;i<n-k+1;i++){
        int val = 0;
        vector<int> tmp(k,0);
        for(int j=0;j<k;j++){
            if(search(k,tmp,c[i+j])){
                tmp[j] = c[i+j];
                val++;
            }
        }
        if(val > max){
            max = val;
        }
    }



    cout << max << endl;
}