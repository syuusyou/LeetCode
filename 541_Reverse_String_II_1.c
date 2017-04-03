void reverseStrOneRound(char *s, int k);

char* reverseStr(char* s, int k)
{
    char *head = s;

    while(strlen(head) >= 2 * k)
    {
        reverseStrOneRound(head, k);
        head += (2 * k);
    }

    reverseStrOneRound(head, k);

    return s;
}

void reverseStrOneRound(char *s, int k)
{
    int i, len;
    char temp;

    if(strlen(s) < k)
    {
        len = strlen(s);
    }
    else
    {
        len = k;
    }

    for(i = 0; i < len / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }

    return;
}
