int myAtoi(char* str)
{
    long long int ans;

    ans = atoll(str);

    if(ans > INT_MAX)
    {
        return INT_MAX;
    }
    else if(ans < INT_MIN)
    {
        return INT_MIN;
    }
    else
    {
        return ans;
    }
}
