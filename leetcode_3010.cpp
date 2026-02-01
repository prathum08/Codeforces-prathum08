class Solution {
public:
    int minimumCost(vector<int>& nums) {
        // sort(nums.begin() , nums.end());
        int n = nums.size();
        int sum = INT_MAX;
        int first = nums[0];
        for(int i = 1 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                sum = min(sum , first + nums[i] + nums[j]);
            }
        }

        return sum;

        return sum;
    }
};

// 1-2-26