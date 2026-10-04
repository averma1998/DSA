class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string res = "";

        stringstream ss(path);
        string part;

        while (getline(ss, part, '/')) {

            if (part == ".") {
                continue;
            }
            else if (part == "..") {
                if (!st.empty()) {
                    st.pop();
                }
            }
            else if (!part.empty()) {
                st.push(part);
            }
        }

        while (!st.empty()) {
            res = "/" + st.top() + res;
            st.pop();
        }

        if (res.empty()) {
            return "/";
        }

        return res;
    }
};