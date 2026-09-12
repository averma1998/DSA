class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        // Use long long for volume to prevent integer overflow during multiplication
        long long volume = (long long)length * width * height;
        
        // Define the threshold constants
        long long dimension_threshold = 10000;      // 10^4
        long long volume_threshold = 1000000000;    // 10^9
        
        bool isBulky = (length >= dimension_threshold || 
                        width >= dimension_threshold || 
                        height >= dimension_threshold || 
                        volume >= volume_threshold);
        bool isHeavy = (mass >= 100);

        if (isBulky && isHeavy) {
            return "Both";
        } else if (!isBulky && !isHeavy) {
            return "Neither";
        } else if (isBulky && !isHeavy) {
            return "Bulky";
        } else {
            return "Heavy";
        }
    }
};
