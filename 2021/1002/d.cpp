#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
typedef long long ll;
int main(){
    int N;
    cin >> N;
    vector<ll> a(N);
    vector<ll> b(N);

    vector<int> ans(N+1);

    for(int i = 0; i < N; i++){
        ll s,t;
        cin >> s >> t;
        a[i] = s;
        b[i] = s + t ;
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());


    int a_n = 0;
    int b_n = 0;
    int k = 0;
    ll now = 0;
    ll last = 0;
    while(a_n < N || b_n < N){

        if(a[a_n] == b[b_n] && a_n < N){
            a_n++;
            b_n++;
        }else if(a[a_n] < b[b_n] && a_n < N){
            now = a[a_n];
            ans[k] += now - last;
            
            k++;
            a_n++;
            while(a[a_n] == now && a_n < N){
                a_n++;
                k++;
            }
            last = now;

        }else{
            now = b[b_n];
            ans[k] += now - last;
            k--;
            b_n++;
            while(b[b_n] == now && b_n < N){
                b_n++;
                k--;
            }
            last = now;
        }



    }
    //ans[k+1] += 1;

    for(int i = 1; i <= N; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}