#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string a;
        cin >> a;
        int firstSum = 0;
        int lastSum = 0;
        for(int i = 0 ; i < 3 ; i++){
            firstSum += (a[i] - '0');
        }
        for(int i = a.size() - 1 ; i >= 3 ; i--){
            lastSum += (a[i] - '0');
        }
        
        if(firstSum == lastSum){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
        
    }
}

// Codeforces - 1676A Lucky?