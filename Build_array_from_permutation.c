#include <stdio.h>
#include <stdlib.h>

int* buildArray(int* nums, int numsSize, int* returnSize) {
    int *ans;
    ans= (int *)malloc(numsSize * sizeof(int));
    *returnSize= 0;
    for(int i= 0; i< numsSize; i++){
             ans[i]= nums[nums[i]];
             *returnSize+=1;
    }
    return ans;
}

void main(){
    int ansSize, *ans;
    int nums[]= {0,2,1,5,3,4};
    ans= buildArray(nums, 6, &ansSize);
    for (int i= 0; i< ansSize; i++){
        printf("%d  ", *ans);
        ans++;
    }
}