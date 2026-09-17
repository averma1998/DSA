class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        int n = s.size();
        // 1. Push all original characters onto the stack
        for(int i = 0; i < n; i++){
            st.push(s[i]);
        }
        // 2. Clear the vector so it is empty and ready for the reversed characters
        s.clear();
        // 3. Pop from the stack and push back into the empty vector
        while(!st.empty()){
            char c = st.top();
            st.pop();
            s.push_back(c);
        }
    }
};
