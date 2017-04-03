int removeElement(int* nums, int numsSize, int val)
{
    int i, j;

    if(numsSize == 0)
    {
        return 0;
    }

    for(i = 0, j = numsSize - 1; i < j; i++)
    {
        if(nums[i] == val)
        {
            while(nums[j] == val)
            {
                j--;
                if(j == i)
                {
                    return i;
                }
            }
            nums[i] = nums[j--];
        }
    }

    if(nums[i] == val || i > j)
    {
        return i;
    }
    else
    {
        return i + 1;
    }
}
