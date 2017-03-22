/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) 
{
    int *returnNums;
    int i, idx;
    
    returnNums = (int *)malloc(sizeof(int) * numsSize);
    *returnSize = 0;
    
    for(i = 0; i < numsSize; i++)
    {
        idx = abs(nums[i]) - 1;
        if(nums[idx] > 0)
        {
            nums[idx] *= -1;
        }
    }
    
    for(i = 0; i < numsSize; i++)
    {
        if(nums[i] > 0)
        {
            returnNums[(*returnSize)++] = i + 1;
        }
    }
    
    return returnNums;
}
