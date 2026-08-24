class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum =0;
        int n=nums.size();
        int result=0;
        unordered_map<int,int> f;
        f[0]=1;
        for(int i =0;i<n;i++){
            sum+=nums[i];
            int ques=sum-k;
            int freq=f[ques];
            result+=freq;
            f[sum]++;
        }
        return result;
    }
};