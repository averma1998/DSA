class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int k = s.length();
        int word_size = words[0].length();
        vector<int> res;

        unordered_map<string, int> freq2;
        for (string w : words) {
            freq2[w]++;
        }
        int left = 0;
        int num_words = words.size();
        int total_len = word_size * num_words;
        for (int offset = 0; offset < word_size; offset++) {
            int left = offset;
            unordered_map<string, int> freq1;
            for (int right = offset; right < s.length(); right += word_size) {
                string current_word = s.substr(right, word_size);
                freq1[current_word]++;
                if ((right - left + word_size) > total_len) {
                    string w_left = s.substr(left, word_size);
                    freq1[w_left]--;

                    if (freq1[w_left] == 0) {
                        freq1.erase(w_left);
                    }
                    left += word_size;
                }
                if ((right - left + word_size) == total_len) {
                    if (freq1 == freq2) {
                        res.push_back(left);
                    }
                }
            }
        }
        return res;
    }
};
