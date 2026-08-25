class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0;
        int maxlen = 0;
        unordered_map<int, int> seen;
        seen[0] = -1;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i]==1?1:-1;
            
            if(seen.count(sum)){
                maxlen=max(maxlen,i-seen[sum]);
            }
            else {
                seen[sum]=i;}
        }
        return maxlen;
    }
};