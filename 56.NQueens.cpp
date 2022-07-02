vector<vector<int>> ans;
vector<vector<int>> res;
vector<pair<int,int>> Queens;


bool isSafe(int i,int j,int n)
{
    for(auto q :Queens)
    {
        if(i==q.first or j==q.second or j-i==q.second-q.first or j+i==q.second+q.first)
            return false;
    }
    return true;
}

void solve(int placed,int n)
{
     if(placed==n)
     {
         vector<int> temp;
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<n;j++)
             {
                 temp.push_back(ans[i][j]);
             }
         }
         res.push_back(temp);
     }
    for(int i=0;i<n;i++)
    {
        if(isSafe(placed,i,n))
        {
            ans[placed][i]=1;
            Queens.push_back({placed,i});
            solve(placed+1,n);
            Queens.pop_back();
            ans[placed][i]=0;
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    res.clear();
    ans.clear();
    ans.resize(n,vector<int>(n,0));
    
    solve(0,n);
    
    return res;
}
