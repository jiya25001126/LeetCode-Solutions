class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;

        while (n) {
            count += (n & 1);
            n >>= 1;
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna