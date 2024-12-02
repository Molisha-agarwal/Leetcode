/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<stdlib.h>
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int*ans=(int*)malloc(numsSize *sizeof(int));
    int negativeindex=1;
    int positiveindex=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<0){
           ans[negativeindex]=nums[i];
           negativeindex+=2;
        }
        else{
            ans[positiveindex]=nums[i];
            positiveindex+=2;
        }
    }
    *returnSize=numsSize;
    return ans;

}