/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int *ret;
    int i, tmp;

    *returnSize = digitsSize + 1;
    for(i = 0; i < digitsSize; i++)
    {
        if(digits[i] != 9)
        {
            *returnSize = digitsSize;
            break;
        }
    }

    ret = (int *)malloc(sizeof(int) * ((*returnSize) + 1));
    ret[0] = 1;

    for(i = 0; i < digitsSize; i++)
    {
        ret[i] += digits[digitsSize - i - 1];
        if(ret[i] > 9)
        {
            ret[i + 1] = 1;
            ret[i] -= 10;
        }
        else
        {
            ret[i + 1] = 0;
        }
    }

    for(i = 0; i < (*returnSize) / 2; i++)
    {
        tmp = ret[i];
        ret[i] = ret[(*returnSize) - i - 1];
        ret[(*returnSize) - i - 1] = tmp;
    }

    return ret;
}
