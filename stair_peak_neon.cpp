#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int a , b , c;
        cin >> a >> b >> c;
        if(c > a && b < c && a < b){
            cout << "STAIR" << endl;
        }
        else if(a < b && b > c){
            cout << "PEAK" << endl;
        }
        else{
            cout << "NONE" << endl;
        }
    }
}

// Codeforces --> 1950A Stair , Peak or Neither