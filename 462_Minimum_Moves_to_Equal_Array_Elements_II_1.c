int compare(const void *a, const void *b);

int minMoves2(int* nums, int numsSize)
{
     int i, sum = 0, median;

     qsort((void *)nums, numsSize, sizeof(int), compare);
     median = nums[numsSize / 2];

     for(i = 0; i < numsSize; i++)
     {
         sum += abs(nums[i] - median);
     }

     return sum;
}

int compare(const void *a, const void *b)
{
    return *((int *)a) - *((int *)b);
}
