bool checkPerfectNumber(int num)
{
    int bound = (int)sqrt(num);
    int sum = 1, i;

    if(num < 2)
    {
        return false;
    }

    for(i = 2; i <= bound; i++)
    {
        if(num % i == 0)
        {
            sum += i;
            if(num / i != i)
            {
                sum += num / i;
            }
        }
    }

    if(num == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
