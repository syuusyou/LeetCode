/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int num, int* returnSize)
{
    int *numsReturn, i;

    *returnSize = num + 1;
    numsReturn = (int *)malloc(sizeof(int) * (*returnSize));

    for(i = 0; i <= num; i++)
    {
        numsReturn[i] = __builtin_popcount(i);
    }

    return numsReturn;
}
