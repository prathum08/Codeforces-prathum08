#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int a,s,x;
        cin >> a >> s >> x;
        int arr[a];
        int sum = 0;
        for(int i = 0 ; i < a ; i++){
            cin >> arr[i];
            sum = sum + arr[i];
        }
        if(sum == s){
            cout << "YES" << endl;
        }
        else if(sum > s){
            cout << "NO" << endl;
        }
        else if(abs(sum - s) % x == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
// 25 / 1 / 26