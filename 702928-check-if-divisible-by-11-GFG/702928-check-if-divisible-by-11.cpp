class Solution {
  public:
    bool divisibleBy11(string s) {
        int oddSum = 0, evenSum = 0;

        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0)
                oddSum += s[i] - '0';
            else
                evenSum += s[i] - '0';
        }

        return abs(oddSum - evenSum) % 11 == 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna