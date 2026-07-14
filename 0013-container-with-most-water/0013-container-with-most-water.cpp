class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int l=0, r=height.size()-1;
        while(l<r){
            int w = r-l;
            int h = min(height[l], height[r]);
            int currWater = w*h;
            maxWater = max(maxWater, currWater);
            height[l] < height[r] ? l++:r--;
        }
        return maxWater;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna