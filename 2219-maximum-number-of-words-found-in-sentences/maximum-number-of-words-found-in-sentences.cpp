class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxwords = 0;
        
        for (const string& sentence : sentences) {
            int spaces = count(sentence.begin(), sentence.end(), ' ');
            maxwords = max(maxwords, spaces + 1);
        }
        return maxwords;
    }
};