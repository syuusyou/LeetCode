bool canWinNim(int n) 
{
    if(n < 4 || n % 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}
