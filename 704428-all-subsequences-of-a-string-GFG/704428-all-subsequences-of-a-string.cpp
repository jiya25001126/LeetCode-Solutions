class Solution {
  public:
    void solve(string &s, int idx, string curr, vector<string> &ans) {
        if (idx == s.size()) {
            ans.push_back(curr);
            return;
        }

        solve(s, idx + 1, curr, ans);

        curr.push_back(s[idx]);
        solve(s, idx + 1, curr, ans);
    }
  
    vector<string> powerSet(string &s) {
       vector<string> ans;
        solve(s, 0, "", ans);

        sort(ans.begin(), ans.end());
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna