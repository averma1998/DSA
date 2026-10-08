class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int len = 0;
        bool has_odd = false;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        for (auto pair : mp) {
            int count = pair.second;

            if (count % 2 == 0) {
                len += count;
            } else {
                len += count - 1;
                has_odd = true;  
            }
        }
        if (has_odd) {
            len += 1;
        }

        return len;
    }
};
