int getSum(int a, int b)
{
    int carry = 0, bit, sum = 0, i;


    for(i = 0; i < sizeof(int) * 8; i++)
    {
        bit = 1 << i;
        if(carry)
        {
            if((a & bit) || (b & bit))
            {
                sum |= ((a & bit) & (b & bit));
            }
            else
            {
                sum |= bit;
                carry = 0;
            }
        }
        else
        {
            if((a & bit) && (b & bit))
            {
                carry = 1;
            }
            else
            {
                sum |= ((a & bit) | (b & bit));
            }
        }
    }

    return sum;
}
