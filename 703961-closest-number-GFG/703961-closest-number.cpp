class Solution {
  public:
    int closestNumber(int n, int m) {
        int q=n/m; //quotient
        int n1=m*q; //lower multiple
        int n2=((n*m)>0) ? (m*(q+1)) : (m*(q-1)); //check same sign
        if(abs(n-n1)<abs(n-n2)){ //if n1 closer
            return n1;
        }
        if(abs(n-n2)<abs(n-n1)){ //if n2 closer
            return n2;
        }
        return (abs(n1) > abs(n2)) ? n1:n2; //if both are close
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna