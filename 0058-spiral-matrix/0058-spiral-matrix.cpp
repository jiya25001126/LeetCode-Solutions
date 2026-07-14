class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
        vector<int> res;

        while (srow <= erow && scol <= ecol) {
            for (int j = scol; j <= ecol; j++) {
                res.push_back(mat[srow][j]);
            }
            for (int i = srow+1; i <= erow; i++) {
                res.push_back(mat[i][ecol]);
            }
            for (int j = ecol-1; j >= scol; j--) {
                if(srow==erow){
                    break;
                }
                res.push_back(mat[erow][j]);
            }
            for (int i=erow-1; i>=srow+1; i--) {
                if(scol==ecol){
                    break;
                }
                res.push_back(mat[i][scol]);
            }
            srow++; erow--; scol++; ecol--;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna