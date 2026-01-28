class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin() , arr.end());
        vector<vector<int>> result;
        int minDiff = INT_MAX;
        for(int i = 1 ; i < n ; i++){
            if(minDiff > abs(arr[i] - arr[i - 1])){
                minDiff = abs(arr[i] - arr[i - 1]);
            }
        }
        for(int i = 1;  i < n ; i++){
            vector<int> ex;
            if(abs(arr[i] - arr[i - 1]) == minDiff){
                ex.push_back(arr[i - 1]);
                ex.push_back(arr[i]);
            }
            if(!ex.empty()){
                result.push_back(ex);
            }
        }

        return result
    }
};

// 26-1-26
