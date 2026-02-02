#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x == 3){
            cout << 3 << endl;
        }
        else if(x == 2){
            cout << 2 << endl;
        }
        else if(x >= 4){
            cout << x % 2 << endl;
        }
    }
}

// 2-2-26