class Solution {
  public:
    int largestPrimeFactor(int n) {
        int largest = -1;

        while (n % 2 == 0) {
            largest = 2;
            n /= 2;
        }

        for (int i = 3; i * i <= n; i += 2) {
            while (n % i == 0) {
                largest = i;
                n /= i;
            }
        }

        if (n > 2)
            largest = n;

        return largest;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna