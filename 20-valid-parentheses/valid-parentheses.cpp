class Solution {
public:
    bool isValid(string s) {
        // Keep replacing matching pairs until none are left
        while (s.find("()") != string::npos || 
               s.find("[]") != string::npos || 
               s.find("{}") != string::npos) {
            
            size_t pos;
            if ((pos = s.find("()")) != string::npos) {
                s.erase(pos, 2);
            } else if ((pos = s.find("[]")) != string::npos) {
                s.erase(pos, 2);
            } else if ((pos = s.find("{}")) != string::npos) {
                s.erase(pos, 2);
            }
        }
        
        // If the string is empty, all brackets were validly matched
        return s.empty();
    }
};
