/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
{
    int *ret = (int *)malloc(sizeof(int) * 2);
    int i = 0, j = numbersSize - 1;

    *returnSize = 2;

    while(numbers[i] + numbers[j] != target)
    {
        if(numbers[i] + numbers[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    ret[0] = i + 1;
    ret[1] = j + 1;

    return ret;
}
