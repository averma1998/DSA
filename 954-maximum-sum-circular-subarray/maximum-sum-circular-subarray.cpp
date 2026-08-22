class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total_sum = nums[0];
        //for max_sum subarray
        int best_ending = nums[0];
        int max_sum = nums[0];
        //for min_sum subarray
        int best_ending2 = nums[0];
        int min_ans = nums[0];
        
        for (int j = 1; j < nums.size(); j++) {
            total_sum += nums[j];
            // 1. Calculate Maximum Subarray
            int v1 = best_ending + nums[j];
            int v2 = nums[j];
            best_ending = max(v1, v2);
            max_sum = max(best_ending, max_sum);
            // 2. Calculate Minimum Subarray
            int v3 = best_ending2 + nums[j];
            int v4 = nums[j];
            best_ending2 = min(v3, v4);
            min_ans = min(best_ending2, min_ans);
        }
        if (max_sum < 0) {
            return max_sum;
        }
        return max(max_sum, total_sum - min_ans);
    }
};
