class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            bool left_greater = (i == 0 || nums[i] > nums[i - 1]);
            bool right_greater = (i == n - 1 || nums[i] > nums[i + 1]);
            if (left_greater && right_greater) {
                return i;
            }
        }
        return 0;
    }
};
