#include <string>

class Solution {
public:
    bool checkIfPangram(std::string sentence) {
        if (sentence.length() < 26) {
            return false;
        }
        for (char ch = 'a'; ch <= 'z'; ch++) {
            if (sentence.find(ch) == std::string::npos) {
                return false;
            }
        }
        return true;
    }
};
