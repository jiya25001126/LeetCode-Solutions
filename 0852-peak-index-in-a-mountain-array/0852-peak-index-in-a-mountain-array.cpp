class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=1, end = arr.size()-2;
        while(st <= end){
            int mid =  st + (end - st)/2;
            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
                return mid;
            }
            else if(arr[mid-1] < arr[mid]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna