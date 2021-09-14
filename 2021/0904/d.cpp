#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int L,Q;
    cin >> L >> Q;

    vector<int> list;

    vector<int> a(Q);
    vector<int> b(Q);

    for(int i=0;i<Q;i++){
        cin >> a[i] >> b[i];
    }

    for(int i=0;i<Q;i++){

        if(a[i] == 2){

            int cnt = list.size()-1;
            int up = -1;
            while(cnt >= 0){
                
                if(list[cnt] > b[i]){
                    up = cnt;
                }
                cnt--;
            }

            if(list.size() == 0){
                cout << L << endl;
            }else if(up == -1){
                cout << L - list[list.size()-1] << endl;
            }else if(up-1 >= 0){
                cout << list[up] - list[up-1] << endl;
            }else{
                cout << list[up] << endl;
            }

        }else{
            list.push_back(b[i]);
            sort(list.begin(),list.end());
        }


    }
}