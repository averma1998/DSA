class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();

        // Build prefix sum
        vector<long long> prefix(n + 1);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
        // 1. Try to find a valid subarray
        deque<int> dq;
        int ans = n + 1;
        for (int i = 0; i <= n; i++) {
            while (!dq.empty() && prefix[i] - prefix[dq.front()] >= k) {
                ans = min(ans, i - dq.front());
                dq.pop_front();
            }
            // 2. Remove useless candidates
            while (!dq.empty() && prefix[dq.back()] >= prefix[i]) {
                dq.pop_back();
            }
            // 3. Add current prefix index
            dq.push_back(i);
        }

        if (ans == n + 1)
            return -1;

        return ans;
    }
};
