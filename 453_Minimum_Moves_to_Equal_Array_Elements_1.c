int minMoves(int* nums, int numsSize)
{
    int sum, min, i;

    for(sum = 0, min = INT_MAX, i = 0; i < numsSize; i++)
    {
        sum += nums[i];
        if(min > nums[i])
        {
            min = nums[i];
        }
    }

    return sum - min * numsSize;
}
