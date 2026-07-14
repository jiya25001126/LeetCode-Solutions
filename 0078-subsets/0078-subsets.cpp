class Solution {
public:
    void getSubsets(vector<int>& nums, vector<int> &ans, int i, vector<vector<int>> &allSubsets) {
        if (i == nums.size()) {
            allSubsets.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        getSubsets(nums, ans, i+1, allSubsets);
        ans.pop_back();
        getSubsets(nums, ans, i+1, allSubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;
        getSubsets(nums, ans, 0, allSubsets);
        return allSubsets;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna