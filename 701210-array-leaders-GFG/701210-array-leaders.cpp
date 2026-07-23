class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;

        int maxi = arr[arr.size() - 1];
        ans.push_back(maxi);

        for (int i = arr.size() - 2; i >= 0; i--) {
            if (arr[i] >= maxi) {
                maxi = arr[i];
                ans.push_back(arr[i]);
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna