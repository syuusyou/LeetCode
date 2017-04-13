bool canConstruct(char* ransomNote, char* magazine)
{
    int count[26] = {0};
    int i, len;

    len = strlen(ransomNote);
    for(i = 0; i < len; i++)
    {
        count[ransomNote[i] - 'a']++;
    }

    len = strlen(magazine);
    for(i = 0; i < len; i++)
    {
        count[magazine[i] - 'a']--;
    }

    for(i = 0; i < 26; i++)
    {
        if(count[i] > 0)
        {
            return false;
        }
    }

    return true;
}
