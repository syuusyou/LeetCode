int lengthOfLongestSubstring(char* s)
{
    int last[256], i;
    int left = 0, ans = 0, idx = 0;

    for(i = 0; i < 256; i++)
    {
        last[i] = -1;
    }

    while(*s)
    {
        if(last[*s] >= left)
        {
            left = last[*s] + 1;
        }

        last[*s] = idx;

        if(ans < idx - left + 1)
        {
            ans = idx - left + 1;
        }

        s++;
        idx++;
    }

    return ans;
}
