class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        string res;

        for (int i = 0; i < num.size(); i++) {
            while (!st.empty() && st.top() > num[i] && k > 0) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while (k > 0 && !st.empty()) { // If k digits are still left to remove
            st.pop();
            k--;
        }
        while (!st.empty()) { // Build result
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        // Remove zeros
        int i = 0;
        while (i < res.size() && res[i] == '0') {
            i++;
        }
        res = res.substr(i);
        // If nothing remains
        if (res.empty()) {
            return "0";
        }
        return res;
    }
};