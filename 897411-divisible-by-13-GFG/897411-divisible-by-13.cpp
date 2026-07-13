class Solution {
  public:
    bool divby13(string &s) {
        int rem = 0;

        for (char ch : s) {
            rem = (rem * 10 + (ch - '0')) % 13;
        }

        return rem == 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna