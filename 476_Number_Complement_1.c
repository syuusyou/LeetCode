int findComplement(int num)
{
    int start = 0, result = 0;
    unsigned int i;
    
    for(i = 1 << 31; i != 0; i >>= 1)
    {
        if(num & i)
        {
            start = 1;
        }
        if(start && !(num & i))
        {
            result += i;
        }
    }
    
    return result;
}
