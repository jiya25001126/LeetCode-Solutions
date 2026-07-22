class Solution {
public:
    string convertToTitle(int columnNumber) {

        string ans = "";

        while (columnNumber > 0) {

            columnNumber--;

            int rem = columnNumber % 26;

            ans += char(rem + 'A');

            columnNumber /= 26;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna