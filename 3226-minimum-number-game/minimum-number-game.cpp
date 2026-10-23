class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int i = 0;

        while (i < nums.size()) {
            swap(nums[i], nums[i + 1]);
            i += 2;
        }

        return nums;
    }
};