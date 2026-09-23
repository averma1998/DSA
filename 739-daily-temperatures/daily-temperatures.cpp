class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n);
        stack<int> st;
        result[n - 1] = 0;
        st.push(n - 1);

        for (int i = n - 2; i >= 0; i--) {
            // Pop all indices that have temperatures <= current temperature
            while (!st.empty() && temperatures[i] >= temperatures[st.top()]) {
                st.pop();
            }
                if(st.empty()){
                    result[i]=0;
                }
                else{
                    result[i]=st.top()-i;
                }
            st.push(i); 
        }
        return result;
    }
};
