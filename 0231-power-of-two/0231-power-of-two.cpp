class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return (n & (n-1)) == 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna