class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        if (intervals.empty()) {
            return {newInterval};
        }

        vector<vector<int>> res;
        int n = intervals.size();

        int start = intervals[0][0];
        int end = intervals[0][1];

        int s = newInterval[0];
        int e = newInterval[1];

        // 1. Handle if newInterval comes completely before the first element
        if (e < start) {
            res.push_back(newInterval);
            s = INT_MAX; // Mark as processed
        }
        // 2. Handle if newInterval overlaps with the first element
        else if (end >= s && start <= e) {
            start = min(start, s);
            end = max(end, e);
            s = INT_MAX; // Mark as processed
        }

        for (int i = 1; i < n; i++) {
            // 3. If newInterval fits perfectly BETWEEN the previous element and
            // current element
            if (s != INT_MAX && e < intervals[i][0] && s > end) {
                res.push_back(
                    {start, end}); // Push the completed previous interval first
                res.push_back(newInterval); // Push newInterval next
                start =
                    intervals[i]
                             [0]; // Move tracking window to the current element
                end = intervals[i][1];
                s = INT_MAX; // Mark as processed
                continue;    // Skip the rest of the loop for this element
            }

            // 4. Check if newInterval overlaps with our current running
            // tracking window
            else if (s != INT_MAX && end >= s && start <= e) {
                start = min(start, s);
                end = max(end, e);
                s = INT_MAX; // Mark as processed
            }

            // Standard interval merging logic
            if (intervals[i][0] <= end) {
                end = max(end, intervals[i][1]);
            } else {
                res.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }

        // Final check for the very last tracking window
        if (s != INT_MAX && end >= s && start <= e) {
            start = min(start, s);
            end = max(end, e);
            s = INT_MAX;
        }

        res.push_back({start, end});

        // 5. If newInterval was larger than everything and belongs at the
        // absolute end
        if (s != INT_MAX) {
            res.push_back(newInterval);
        }

        return res;
    }
};
