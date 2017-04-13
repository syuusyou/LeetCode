char* complexNumberMultiply(char* a, char* b)
{
    int aReal, bReal, aImage, bImage, tmp;
    char *ret = (char *)malloc(sizeof(char) * 100);

    aReal = atoi(a);
    bReal = atoi(b);
    aImage = atoi((strpbrk(a, "+") + 1));
    bImage = atoi((strpbrk(b, "+") + 1));

    sprintf(ret, "%d+%di", aReal * bReal - aImage * bImage, aReal * bImage + bReal * aImage);

    return ret;
}
