int countBattleships(char** board, int boardRowSize, int boardColSize)
{
    int i, j, ans = 0;

    for(i = 0; i < boardRowSize; i++)
    {
        for(j = 0; j < boardColSize; j++)
        {
            if(board[i][j] == 'X' && (i == 0 || board[i - 1][j] == '.') && (j == 0 || board[i][j - 1] == '.'))
            {
                ans++;
            }
        }
    }

    return ans;
}
