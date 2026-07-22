class Solution {
  public:
    long long factorial(int n){
        if(n==0 || n==1){
            return 1;
        }
        return n * factorial(n-1);
    }
    
    long long nPr(int n, int r) {
        // code here
        long long factn = factorial(n);
        long long factr = factorial(n-r);
        return factn/factr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna