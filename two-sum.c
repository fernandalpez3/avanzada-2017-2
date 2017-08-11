#include <stdio.h>

int * getIndexes(int *nums, int len, int target)
{
    int i,j;
    int result[2];
    int candidate;
    int complement;

    for(i=0;i<len;i++){
        candidate = nums[i];
        complement = target - candidate;
    }
}

int main(){
    int nums[] = {2,7,11,15};
    int target = 9;
    int len = 4;
    int *result = getIndexes(nums,target);
    if(nums[result[0]] + nums[result[1]] == target)
    {
        printf("works");
    }else{
        printf(":(\n)");
    }
}