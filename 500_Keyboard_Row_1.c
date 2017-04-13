/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
const char row[3][11] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};

int whichRow(char c);

char** findWords(char** words, int wordsSize, int* returnSize)
{

    char **ret;
    int which, i, j, len;

    *returnSize = 0;
    ret = (char **)malloc(sizeof(char *) * wordsSize);

    for(i = 0; i < wordsSize; i++)
    {
        len = strlen(words[i]);
        which = whichRow(words[i][0]);
        for(j = 1; j < len; j++)
        {
            if(whichRow(words[i][j]) != which)
            {
                which = -1;
                break;
            }
        }

        if(which != -1)
        {
            ret[*returnSize] = (char *)malloc(sizeof(char) * (len + 1));
            strcpy(ret[*returnSize], words[i]);
            (*returnSize)++;
        }
    }

    return ret;
}

int whichRow(char c)
{
    int i;
    char a = tolower(c);


    for(i = 0; i < 3; i++)
    {
        if(strchr(row[i], a))
        {
            return i;
        }
    }

    return -1;
}
