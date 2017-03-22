bool detectAllCapital(char *word);
bool detectAllNonCapital(char *word);

bool detectCapitalUse(char* word) 
{
    if(islower(word[0]))
    {
        return detectAllNonCapital(word + 1);
    }
    else
    {
        return detectAllNonCapital(word + 1) || detectAllCapital(word + 1);
    }
}

bool detectAllCapital(char *word)
{
    while(*word != '\0')
    {
        if(islower(*word))
        {
            return false;
        }
        word++;
    }
    return true;
}

bool detectAllNonCapital(char *word)
{
    while(*word != '\0')
    {
        if(isupper(*word))
        {
            return false;
        }
        word++;
    }
    return true;
}
