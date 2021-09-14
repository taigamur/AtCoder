#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int> > s(N*N,vector<int>(2));
    vector<vector<int> > t(N*N,vector<int>(2));

    int sum_s = 0;
    for(int i = 0; i < N; i++){
        string a;
        cin >> a;
        for(int j = 0; j < N; j++){
            if(a[j] == '#'){
                s[sum_s].push_back(i);
                s[sum_s].push_back(j);
                sum_s++;
            }
        }
    }

    int sum_t = 0;
    for(int i = 0; i < N; i++){
        string a;
        cin >> a;
        for(int j = 0; j < N; j++){
            if(a[j] == '#'){
                t[sum_t].push_back(i);
                t[sum_t].push_back(j);
                sum_t++;
            }
        }
    }

///////////0°
    for(int i = 0; i < sum_t; i++){
        int dif_x = s[0][0] - t[i][0];
        int dif_y = s[0][1] - t[i][1];

        //1点目は対応付づみ
        int ans = 1;
        for(int j = 1; j < sum_t; j++){
            
            for(int k = 0; k < sum_t; k++){
                if(s[j][0] == (t[k][0] + dif_x) && s[j][1] == (t[k][1] + dif_y)){
                    ans++;
                    cout << ans << endl;
                    break;
                }else{
                    cout << "--" << endl;
                }
            }
        }

        if(ans == sum_s){
            cout << "Yes" << endl;
            return 0;
        }

    }


    /////90 

    for(int i = 0; i < sum_t; i++){
        int t = s[i][0];
        s[i][0] = -s[i][1];
        s[i][1] = t;
    }

    for(int i = 0; i < sum_t; i++){
        int dif_x = s[0][0] - t[i][0];
        int dif_y = s[0][1] - t[i][1];

        //1点目は対応付づみ
        int ans = 1;
        for(int j = 1; j < sum_t; j++){
            
            for(int k = 0; k < sum_t; k++){
                if(s[j][0] == t[k][0] + dif_x && s[j][1] == t[k][1] + dif_y){
                    ans++;
                    cout << ans << endl;
                    break;
                }
            }
            if(ans == sum_s){
                cout << "Yes" << endl;
                return 0;
            }

        }
    }


    /////180

    for(int i = 0; i < sum_t; i++){
        int t = s[i][0];
        s[i][0] = -s[i][1];
        s[i][1] = t;
    }

    for(int i = 0; i < sum_t; i++){
        int dif_x = s[0][0] - t[i][0];
        int dif_y = s[0][1] - t[i][1];

        //1点目は対応付づみ
        int ans = 1;
        for(int j = 1; j < sum_t; j++){
            
            for(int k = 0; k < sum_t; k++){
                if(s[j][0] == t[k][0] + dif_x && s[j][1] == t[k][1] + dif_y){
                    ans++;
                    cout << ans << endl;
                    break;
                }
            }
            if(ans == sum_s){
                cout << "Yes" << endl;
                return 0;
            }

        }
    }

        /////270

    for(int i = 0; i < sum_t; i++){
        int t = s[i][0];
        s[i][0] = -s[i][1];
        s[i][1] = t;
    }

    for(int i = 0; i < sum_t; i++){
        int dif_x = s[0][0] - t[i][0];
        int dif_y = s[0][1] - t[i][1];

        //1点目は対応付づみ
        int ans = 1;
        for(int j = 1; j < sum_t; j++){
            
            for(int k = 0; k < sum_t; k++){
                if(s[j][0] == t[k][0] + dif_x && s[j][1] == t[k][1] + dif_y){
                    ans++;
                    cout << ans << endl;
                    break;
                }
            }
            if(ans == sum_s){
                cout << "Yes" << endl;
                return 0;
            }

        }
    }

    cout << "No" << endl;







}