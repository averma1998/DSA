class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
        string res;
        stack<pair<char, int>> st;
        for (int i = 0; i < n; i++) {
            if (st.empty()) {
                st.push({s[i], 1});
            } else if (st.top().first == s[i]) {
                st.top().second++;

                if (st.top().second == k) {
                    st.pop();
                }
            } else {
                st.push({s[i], 1});
            }
        }
        while (!st.empty()) {
            char ch = st.top().first;
            int count = st.top().second;

            while (count--) {
                res += ch;
            }

            st.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};