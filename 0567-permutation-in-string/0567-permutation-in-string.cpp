class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for(int i=0;i<s1.length();i++){
            freq[s1[i] - 'a']++;
        }
        int windsize = s1.length();
        for(int i=0;i<s2.length();i++){
            int windidx=0, idx=i;
            int windfreq[26] = {0};
            while(windidx < windsize && idx<s2.length()){
                windfreq[s2[idx]-'a']++;
                windidx++; idx++;
            }
            if(isFreqSame(freq, windfreq)){
                return true;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna