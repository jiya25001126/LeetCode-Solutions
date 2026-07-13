class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int temp=n;
        int sum=0;
        while(temp!=0){
            int dig = temp%10;
            sum += (dig*dig*dig);
            temp /= 10;
        }
        return (sum == n);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna