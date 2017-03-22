int findMaxConsecutiveOnes(int* nums, int numsSize) 
{
    int maxLen = 0;
    int prevZero = -1;
    int i;
    
    for(i = 0; i < numsSize; i++)
    {
        if(!nums[i])
        {
            if(i - prevZero - 1 > maxLen)
            {
                maxLen = i - prevZero - 1;
            }
            prevZero = i;
        }
    }
    
    if(i - prevZero - 1 > maxLen)
    {
        maxLen = i - prevZero - 1;
    }
    
    return maxLen;
}
