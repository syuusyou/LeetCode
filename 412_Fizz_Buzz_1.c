/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) 
{
    char **array;
    char *buf;
    int i;
    const int bufLen = 11;
    
    array = (char **)malloc(sizeof(char *) * n);
    *returnSize = n;
    
    for(i = 1; i <= n; i++)
    {
        buf = (char *)malloc(sizeof(char) * bufLen);
        array[i - 1] = buf;
        if(i % 3)
        {
            if(i % 5)
            {
                sprintf(buf, "%d", i);
            }
            else
            {
                strncpy(buf, "Buzz", bufLen);
            }
        }
        else
        {
            if(i % 5)
            {
                strncpy(buf, "Fizz", bufLen);
            }
            else
            {
                strncpy(buf, "FizzBuzz", bufLen);
            }
        }
    }
    
    return array;
}
