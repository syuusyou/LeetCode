int findLUSlength(char* a, char* b)
{
    if(strlen(a) != strlen(b))
    {
        return strlen(a) > strlen(b) ? strlen(a) : strlen(b);
    }

    if(strcmp(a, b))
    {
        return strlen(a);
    }
    else
    {
        return -1;
    }
}
