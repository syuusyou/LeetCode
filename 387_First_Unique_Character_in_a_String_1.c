int firstUniqChar(char* s)
{
    int count[26] = {0};
    int i, len;
    bool exist = false;

    len = strlen(s);
    for(i = 0; i < len; i++)
    {
        count[s[i] - 'a']++;
    }

    for(i = 0; i < 26; i++)
    {
        if(count[i] == 1)
        {
            exist = true;
            break;
        }
    }

    if(exist)
    {
        for(i = 0; i < len; i++)
        {
            if(count[s[i] - 'a'] == 1)
            {
                return i;
            }
        }
    }
    else
    {
        return -1;
    }

    return -1;
}
