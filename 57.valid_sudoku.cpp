    
    bool isSafe(int row,int col,int k,int board[9][9])
    {
        for(int p=0;p<9;p++)
        {
            if(board[row][p]==k)
                return false;
            if(board[p][col]==k)
                return false;
            
            if(board[3*(row/3)+p/3][3*(col/3)+p%3]==k)
                return false;
        }
        return true;
    }
    bool fillboard(int board[9][9])
    {
        
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]==0)
                {
                    for(int k=1;k<=9;k++)
                    {
                        if(isSafe(i,j,k,board))
                        {
                            board[i][j]=k;
                        if(fillboard(board))
                            return true;
                            
                            board[i][j]=0;
                        }
                    }
                    return false;
                }
            }
        }        
        
        return true;
    }
bool isItSudoku(int board[9][9]) {
    fillboard(board);
}
