class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList,
                                             vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        int i = 0;
        int j = 0;

        while (i < firstList.size() && j < secondList.size()) {

            // 1. Find intersection
            int s1 = max(firstList[i][0], secondList[j][0]);
            int e1 = min(firstList[i][1], secondList[j][1]);

            if (s1 <= e1)
                ans.push_back({s1, e1});

            if (firstList[i][1] < secondList[j][1])
                i++;
            else
                j++;

            // 2. Store intersection if it exists

            // 3. Move the interval that ends first
        }

        return ans;
    }
};