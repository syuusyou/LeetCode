int numberOfArithmeticSlices(int* A, int ASize)
{
    int i, ans = 0, sameDiffCount = 0, diff = 0;

    diff = A[1] - A[0];
    sameDiffCount = 1;
    for(i = 2; i < ASize; i++)
    {
        if(A[i] - A[i - 1] == diff)
        {
            sameDiffCount++;
        }
        else
        {
            if(sameDiffCount > 1)
            {
                ans += (sameDiffCount * (sameDiffCount - 1)) / 2;
            }
            diff = A[i] - A[i - 1];
            sameDiffCount = 1;
        }
    }

    if(sameDiffCount > 1)
    {
        ans += (sameDiffCount * (sameDiffCount - 1)) / 2;
    }

    return ans;
}
