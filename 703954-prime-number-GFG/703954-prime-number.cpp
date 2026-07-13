class Solution {
  public:
    bool isPrime(int n) {
        int flag=1;
        if(n<2){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                flag=0;
            }
        }
        if(flag==1){
            return true;
        }
        return false;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna