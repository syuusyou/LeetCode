char* reverseString(char* s) 
{
    int i;
    int len = strlen(s);
    char *reverse = (char *)malloc(sizeof(char) * (len + 1));
    
    for(i = 0; i < len; i++)
    {
        reverse[i] = s[len - i - 1];
    }
    reverse[len] = '\0';
    
    return reverse;
}
