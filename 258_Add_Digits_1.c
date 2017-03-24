int addDigitsInner(int num);

int addDigits(int num)
{
    if(num < 10)
    {
        return num;
    }
    else
    {
        return addDigits(addDigitsInner(num));
    }
}

int addDigitsInner(int num)
{
    int sum = 0;

    while(num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}
