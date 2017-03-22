/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) 
{
    int i, j;
    int *pair = (int *)malloc(sizeof(int) * 2);
    
    for(i = 0; i < numsSize - 1; i++)
    {
        for(j = i + 1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                pair[0] = i;
                pair[1] = j;
                return pair;
            }
        }
    }
    
    return pair;
}
