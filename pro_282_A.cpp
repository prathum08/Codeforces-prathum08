#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 0;
    while(n--){
        string str;
        cin >> str;
        for(int i = 0 ; i < str.size() ; i++){
            if(str[i] == '+'){
                a = a + 1;
                break;
            }
            else if(str[i] == '-'){
                a = a - 1;
                break;
            }
        }
    }
    cout << a << endl;
}

//24-1-26