#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int L,Q;
    cin >> L >> Q;

    set<int> st;
    vector<int> a(Q);
    vector<int> b(Q);

    for(int i=0;i<Q;i++){
        cin >> a[i] >> b[i];
    }

    for(int i=0; i<Q; i++){
        if(a[i] == 2){

            auto it = st.lower_bound(b[i]);
            auto pre_it = prev(it);

            cout << *it - *pre_it << endl;

        }else{
            st.insert(b[i]);
        }
    }
}