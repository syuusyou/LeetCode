char* licenseKeyFormatting(char* S, int K)
{
    int len = strlen(S);
    int i, j;
    char *C, *ret;

    C = (char *)malloc(sizeof(char) * (len + 1));
    for(i = 0, j = 0; i < len; i++)
    {
        if(S[i] != '-')
        {
            C[j++] = S[i];
        }
    }
    C[j] = '\0';
    len = j;

    ret = (char *)malloc(sizeof(char) * (j + j / K + 1));
    j = 0;
    if(len % K)
    {
        for(i = 0; i < len % K; i++)
        {
            ret[j++] = toupper(C[i]);
        }

        if(C[i])
        {
            ret[j++] = '-';
        }

        for(; i < len; i++)
        {
            ret[j++] = toupper(C[i]);
            if((i + 1 - len % K) % K == 0 && C[i + 1])
            {
                ret[j++] = '-';
            }
        }
    }
    else
    {
        for(i = 0; i < len; i++)
        {
            ret[j++] = toupper(C[i]);
            if((i + 1) % K == 0 && C[i + 1])
            {
                ret[j++] = '-';
            }
        }
    }
    ret[j] = '\0';

    return ret;
}
