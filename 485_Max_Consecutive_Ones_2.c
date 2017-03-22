int findMaxConsecutiveOnes(int* nums, int numsSize) 
{
    int maxLen = 0;
    int tmpLen = 0;
    int i;
    
    for(i = 0; i < numsSize; i++)
    {
        if(nums[i])
        {
            tmpLen++;
        }
        else
        {
            if(tmpLen > maxLen)
            {
                maxLen = tmpLen;
            }
            tmpLen = 0;
        }
    }
    
    if(tmpLen > maxLen)
    {
        maxLen = tmpLen;
    }
    
    return maxLen;
}
