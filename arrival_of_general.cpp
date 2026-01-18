#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> res(n);
    for(int i = 0 ; i < n ; i++){
        cin >> res[i];
    }
    
    int maxEle = *max_element(res.begin() , res.end());
    int minEle = *min_element(res.begin() , res.end());
    
    int maxPos = -1;
    int minPos = -1;
    
    for(int i = 0 ; i < n ; i++){
        if(res[i] == maxEle){
            maxPos = i;
            break;
        }
    }
    for(int i = n - 1 ; i >= 0 ; i--){
        if(res[i] == minEle){
            minPos = i;
            break;
        }
    }
    int cnt = maxPos + (n - 1 - minPos);
    if(maxPos > minPos){
        cnt--;
    }
    
    cout << cnt << endl;
}