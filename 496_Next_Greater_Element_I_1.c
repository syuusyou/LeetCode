/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* findNums, int findNumsSize, int* nums, int numsSize, int* returnSize) 
{
    int *returnNums;
    int i, j, find;
    
    returnNums = (int *)malloc(sizeof(int) * findNumsSize);
    *returnSize = findNumsSize;
    
    for(i = 0; i < findNumsSize; i++)
    {
        find = 0;
        returnNums[i] = -1;
        
        for(j = 0; j < numsSize; j++)
        {
            if(findNums[i] == nums[j])
            {
                find = 1;
            }
            if(find && findNums[i] < nums[j])
            {
                returnNums[i] = nums[j];
                break;
            }
        }
    }
    
    return returnNums;
}
