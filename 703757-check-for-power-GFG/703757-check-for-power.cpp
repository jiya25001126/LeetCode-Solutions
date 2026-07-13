class Solution {
  public:
    bool isPower(int x, int y) {
        if(x==1){
            return false;
        }
        if(y==1){
            return true;
        }
        while(y%x==0){
            y /= x;
        }
        return (y==1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna