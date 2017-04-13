/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize)
{
    int *ret = (int *)malloc(sizeof(int) * 2);
    int upper = sqrt(area);
    int i;

    *returnSize = 2;
    for(i = upper; i > 0; i--)
    {
        if(area % i == 0)
        {
            ret[0] = area / i;
            ret[1] = i;
            return ret;
        }
    }

    return ret;
}
