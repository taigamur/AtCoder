#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int N,Q;
    cin >> N >> Q;

    int A[N];
    int K[Q];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int i=0;i<Q;i++){
        cin >> K[i];
    }

    for(int i=0;i<Q;i++){
        int k=1;
        int kaisu=0;
        int ans=0;
        int j=0;//Aを動かす
        while(kaisu<K[i]){
            if(k !=A[j]){
                ans++;
                kaisu++;
            }else if(k==A[j]){
                j++;
                ans++;
            }
            k++;

        }
        cout << ans << endl;

    }

    return 0;
}