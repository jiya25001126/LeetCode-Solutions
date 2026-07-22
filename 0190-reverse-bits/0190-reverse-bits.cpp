class Solution {
public:
    int reverseBits(int n) {
        unsigned int ans = 0;
        unsigned int num = (unsigned int)n;

        for (int i = 0; i < 32; i++) {
            ans = (ans << 1) | (num & 1);
            num >>= 1;
        }

        return (int)ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna