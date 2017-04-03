char* getPermutation(int n, int k)
{
    int select[9] = {0};
    int factorial = 1, order, index, i, j;
    char *ret = (char *)calloc(n + 1, sizeof(char));

    k -= 1;

    for(i = 1; i < n; i++)
    {
        factorial *= i;
    }

    for(i = n - 1; i >= 0; i--)
    {
        order = k / factorial;
        k = k % factorial;
        if(i != 0)
        {
            factorial /= i;
        }
        for(j = 0, index = -1; j <= order;)
        {
            if(select[++index] == 0)
            {
                j++;
            }
        }
        select[index] = 1;
        ret[n - i - 1] = '0' + index + 1;
    }

    return ret;
}
