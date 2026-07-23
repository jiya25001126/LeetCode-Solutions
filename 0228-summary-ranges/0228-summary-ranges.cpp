class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();

        if (n == 0)
            return ans;

        int start = nums[0];

        for (int i = 1; i <= n; i++) {
            if (i == n || (long long)nums[i] != (long long)nums[i - 1] + 1) {
                if (start == nums[i - 1])
                    ans.push_back(to_string(start));
                else
                    ans.push_back(to_string(start) + "->" +
                                  to_string(nums[i - 1]));

                if (i < n)
                    start = nums[i];
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna