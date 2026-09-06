class Solution {
public:

    void mergeArray(vector<long long>& sum, int left, int mid, int right) {
        vector<long long> tmp;

        int i = left, j = mid + 1;

        while (i <= mid && j <= right)
            tmp.push_back(sum[i] <= sum[j] ? sum[i++] : sum[j++]);

        while (i <= mid) tmp.push_back(sum[i++]);
        while (j <= right) tmp.push_back(sum[j++]);

        for (int k = 0; k < tmp.size(); k++)
            sum[left + k] = tmp[k];
    }

    long long mergeCount(vector<long long>& sum, int left, int right,
                         int lower, int upper) {

        if (left >= right)
            return 0;

        int mid = left + (right - left) / 2;

        long long count =
            mergeCount(sum, left, mid, lower, upper) +
            mergeCount(sum, mid + 1, right, lower, upper);

        int lo = mid + 1;
        int hi = mid + 1;

        for (int i = left; i <= mid; i++) {

            while (lo <= right &&
                   sum[lo] < sum[i] + lower)
                lo++;

            while (hi <= right &&
                   sum[hi] <= sum[i] + upper)
                hi++;

            count += hi - lo;
        }

        mergeArray(sum, left, mid, right);

        return count;
    }

    int countRangeSum(vector<int>& nums, int lower, int upper) {

        int n = nums.size();

        vector<long long> sum(n + 1, 0);

        for (int i = 0; i < n; i++)
            sum[i + 1] = sum[i] + nums[i];

        return mergeCount(sum, 0, n, lower, upper);
    }
};