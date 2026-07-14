bool isPalindrome(int x) {
    int temp=x;
    int dig;
    long long rev=0;
    if(x<0){
        return false;
    }
    while(temp!=0){
        dig = temp%10;
        rev = rev*10 + dig;
        temp /= 10;
    }
    if(x==rev){
        return true;
    }
    else{
        return false;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna