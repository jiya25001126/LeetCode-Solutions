int climbStairs(int n) {
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    int first=1, second=2, current;
    for(int i=3;i<=n;i++){
        current = first + second;
        first = second;
        second = current;
    }
    return second;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna