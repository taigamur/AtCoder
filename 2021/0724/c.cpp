#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


int sum = 0;
int judge(int cnt,string line,int tmp){
    string ch = "chokudai";

    // if(line.size()-cnt < 7-tmp){
    //     return 0;
    // }
    if(cnt > line.size()){
        return 0;
    }

    //先頭を使わない
    judge(cnt+1,line,tmp);

    //先頭を使う
    if(line[cnt] == ch[tmp]){
        cnt++;
        tmp++;
        if(tmp == 8){
            sum++;
        }
        judge(cnt,line,tmp);
    }else{
        return 0;
    }

    return 0;

}

int main(){
    string line;
    cin >> line;
    int cnt = 0;
    int tmp = 0;

    string ch = "chokudai";

    judge(cnt,line,tmp);

    cout << sum % 1000000007 << endl;

}