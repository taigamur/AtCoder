#include <iostream>
#include <vector>

using namespace std;

template<class T> void chmin(T& a, T b){
    if(a > b){
        a = b;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> init(n);
    vector<int> s(n);
    vector<int> t(n);

    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    for(int i=0;i<n;i++){
        int j;
        cin >> j;
        init[i] = j;
        t[i] = j;
    }


    for(int i=0;i<n;i++){
        //if(t[i] < init[i]) continue;

        for(int j=1;j<n;j++){
            if(i+j>=n){
                chmin(t[i+j-n],t[i]+s[i]*j);
            }else{
                chmin(t[i+j],t[i]+s[i]*j);
            }
        }

    }
    for(int i=0;i<n;i++){
        cout << t[i] << endl;
    }
}