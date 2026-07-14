class Solution {
public:
    double myPow(double x, int n) {
        long binform = n;
        if(n<0){
            x = 1/x;
            binform = -binform;
        }
        double res=1;
        while(binform > 0){
            if(binform % 2 == 1){
                res *= x;
            }
            x *= x;
            binform /= 2;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna