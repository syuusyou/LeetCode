/* Use gcc built-in function */
int hammingDistance(int x, int y) 
{
    return __builtin_popcount(x ^ y);
}
