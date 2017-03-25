void sortColors(int* nums, int numsSize)
{
    int count[3] = {0};
    int i, j;

    for(i = 0; i < numsSize; i++)
    {
        count[nums[i]]++;
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < count[i]; j++)
        {
            *(nums++) = i;
        }
    }
}
