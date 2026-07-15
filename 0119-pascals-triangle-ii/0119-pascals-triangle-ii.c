/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    *returnSize = rowIndex+1;
    int *row = (int *)malloc((rowIndex+1) * sizeof(int));
    for(int i=0;i<=rowIndex;i++){
        row[i] = 0;
    }
    row[0] = 1;
    for(int i=1;i<=rowIndex;i++){
        for(int j=i;j>=1;j--){
            row[j] = row[j]+row[j-1];
        }
    }
    return row;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna