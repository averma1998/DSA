class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            
            // Check for opening brackets
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } 
            // Handle closing brackets
            else {
                if (st.empty()) {
                    return false;
                }
                
                if ((ch == ')' && st.top() == '(') ||
                    (ch == '}' && st.top() == '{') ||
                    (ch == ']' && st.top() == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        
        return st.empty();
    }
};
