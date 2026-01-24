class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int maxi = INT_MIN;
        int i = 0;
        int j = n - 1;
        while(i <= j){
            maxi = max(maxi , nums[i] + nums[j]);
            i++;
            j--;
        }

        return maxi;
    }
};

//24/1/26