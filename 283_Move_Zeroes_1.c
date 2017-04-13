void moveZeroes(int* nums, int numsSize)
{
    int i, j;
    for(i = 0, j = 0; i < numsSize; i++)
    {
        if(nums[i])
        {
            j++;
        }
        else
        {
            for(; j < numsSize; j++)
            {
                if(nums[j])
                {
                    nums[i] = nums[j];
                    nums[j] = 0;
                    break;
                }
            }
        }
    }
}
