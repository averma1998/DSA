class Solution {
public:
    int maxNumberOfBalloons(string text) {
        // Step 1: Count frequencies of characters in the text
        unordered_map<char, int> counts;
        for (char c : text) {
            counts[c]++;
        }
        
        // Step 2: Get the possible instances for each required letter
        int b = counts['b'];
        int a = counts['a'];
        int l = counts['l'] / 2; // Divided by 2 because we need 'll'
        int o = counts['o'] / 2; // Divided by 2 because we need 'oo'
        int n = counts['n'];
        
        // Step 3: The bottleneck (minimum) determines the final answer
        return min({b, a, l, o, n});
    }
};
