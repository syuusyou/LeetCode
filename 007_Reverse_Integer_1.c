long long int reversePositive(long long int x);

int reverse(int x)
{
    long long int ans = x;

    if(ans > 0)
    {
        ans = reversePositive(ans);
    }
    else
    {
        ans = -1 * reversePositive(-1 * ans);
    }

    if(ans > INT_MAX || ans < INT_MIN)
    {
        return 0;
    }
    else
    {
        return ans;
    }
}

long long int reversePositive(long long int x)
{
    long long int ans = 0;

    while(x != 0)
    {
        ans *= 10;
        ans += x % 10;
        x /= 10;
    }

    return ans;
}
