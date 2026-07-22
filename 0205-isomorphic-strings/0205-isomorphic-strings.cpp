class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1, mp2;

        for (int i = 0; i < s.size(); i++) {
            if (mp1.count(s[i])) {
                if (mp1[s[i]] != t[i])
                    return false;
            } else {
                mp1[s[i]] = t[i];
            }

            if (mp2.count(t[i])) {
                if (mp2[t[i]] != s[i])
                    return false;
            } else {
                mp2[t[i]] = s[i];
            }
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna