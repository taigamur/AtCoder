#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;

    vector<pair<int,int>> result(2*N); //結果
    vector<string> list(2*N+1);

    for(int i = 1; i <= 2*N; i++){
        string s;
        cin >> s;
        list[i] = s;
    }

    for(int i = 0; i < 2*N; i++){
        result[i].second = i+1;
        result[i].first = 0;
    }

    for(int i = 0; i < M; i++){

        //そのラウンドの試合
        for(int j = 0; j < 2*N; j+=2){
            string a = list[result[j].second];
            string b = list[result[j+1].second];
            if(a[i] == b[i]){

            }else if(a[i] == 'G' && b[i] == 'C'){
                result[j].first -= 1;
            }else if(a[i] == 'C' && b[i] == 'P'){
                result[j].first -= 1;
            }else if(a[i] == 'P' && b[i] == 'G'){
                result[j].first -= 1;
            }else{
                result[j+1].first -= 1;
            }
        }
        sort(result.begin(),result.end());
    }

    for(int i = 0; i < 2*N; i++){
        cout << result[i].second << endl; 
    }
}