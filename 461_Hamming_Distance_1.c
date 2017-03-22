int hammingDistance(int x, int y) 
{
    int distance = 0;
    
    x ^= y;
    
    while(x)
    {
        distance += x & 1;
        x >>= 1;
    }
    
    return distance;
}
