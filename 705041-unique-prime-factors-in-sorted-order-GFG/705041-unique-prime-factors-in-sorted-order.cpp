class Solution {
  public:
    vector<int> primeFac(int n) {
        vector<int> ans;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                ans.push_back(i);

                while (n % i == 0)
                    n /= i;
            }
        }

        if (n > 1)
            ans.push_back(n);

        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna