char findTheDifference(char* s, char* t)
{
    unsigned int count[26] = {0};
    int i;

    while(*t)
    {
        count[*(t++) - 'a']++;
    }

    while(*s)
    {
        count[*(s++) - 'a']--;
    }

    for(i = 0; i < 26; i++)
    {
        if(count[i])
        {
            break;
        }
    }

    return i + 'a';
}
