#include<limits.h>
int myAtoi(char* s) {
    int i=0, sign=1;
    long long num=0;
    while(s[i]==' '){
        i++;
    }
    if(s[i]=='+' || s[i]=='-'){
        if(s[i]=='-'){
            sign=-1;
        }
        i++;
    }
    while(s[i]>='0' && s[i]<='9'){
        num = num*10 + (s[i] - '0');
        if(sign == 1 && num>INT_MAX){
            return INT_MAX;
        }
        if(sign == -1 && -num<INT_MIN){
            return INT_MIN;
        }
        i++;
    }
    return (int)(sign * num);
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna