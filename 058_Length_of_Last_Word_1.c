int lengthOfLastWord(char* s)
{
    int sLen = strlen(s), wLen = 0;
    int i;
    bool isLast = false;

    for(i = sLen - 1; i >= 0; i--)
    {
        if(isLast)
        {
            if(s[i] == ' ')
            {
                return wLen;
            }
            else
            {
                wLen++;
            }
        }
        else
        {
            if(s[i] == ' ')
            {
                continue;
            }
            else
            {
                wLen++;
                isLast = true;
            }
        }
    }

    return wLen;
}
