char *reverseWord(char *s);

char* reverseWords(char* s)
{
    char *tmp = s;

    while(*tmp)
    {
        tmp = reverseWord(tmp);
    }

    return s;
}

char *reverseWord(char *s)
{
    int len = 0, i;
    char tmp;
    bool isEnd = false;

    while(!isspace(s[len]) && s[len] != '\0')
    {
        len++;
    }

    if(s[len] == '\0')
    {
        isEnd = true;
    }

    for(i = 0; i < len / 2; i++)
    {
        tmp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = tmp;
    }

    if(isEnd)
    {
        return s + len;
    }
    else
    {
        return s + len + 1;
    }
}
