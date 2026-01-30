#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        string checker = "codeforces";
        int cnt = 0;
        for(int i = 0 ; i < str.length() ; i++){
            if(str[i] != checker[i]){
                cnt++;
            }
        }
        
        cout << cnt << endl;
        
    }
}

// 30-1-26