int countPrimes(int n)
{
    int i, j, sum = 0;
    int *prime;

    if(n < 3)
    {
        return 0;
    }

    prime = (int *)calloc(n - 1, sizeof(int));
    prime[0] = 1;

    for(i = 1; i < n - 1; i++)
    {
        if(prime[i] == 0)
        {
            for(j = i; j < n - 1; j += i + 1)
            {
                prime[j] = 1;
            }
            sum++;
        }
    }

    return sum;
}
