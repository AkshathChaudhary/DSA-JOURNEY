/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int n, int* returnSize) {
    *returnSize = 2*n;
    int* ans=(int*)malloc((*returnSize)*sizeof(int));
    for (int i=0;i<n;i++){
        ans[i]=nums[i];
        ans[i+n]=nums[i];
    }
    return ans;
}