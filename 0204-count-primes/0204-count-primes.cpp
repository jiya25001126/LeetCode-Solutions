class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n+1, true);
            int count=0;
            for(int i=2;i<n;i++){
                if(isPrime[i]){
                    count++;
                    for(int j=i*2;j<n;j += i){
                        isPrime[j] = false;
                    }
                }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna