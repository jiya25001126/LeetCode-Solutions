class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int freq=0, res=0;
        for(int i=0;i<n;i++){
            if(freq==0){
                res = nums[i];;
            }
            if(res == nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return res;        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna