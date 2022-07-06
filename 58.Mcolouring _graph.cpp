bool isValid(int vert,int c,int n,vector<vector<int>> &graph,vector<int>&color)
{
    for(int i=0;i<n;i++)
    {
        if(color[i]==c and i!=vert and graph[vert][i]==1)
        {
            return false;
        }
    }
    return true;
}

bool Colorcheck(int node,vector<vector<int>> &graph, int m, int n,vector<int>&color)
{
    if(node==n)return true;
    
    for(int i=0;i<m;i++)
    {
        if(isValid(node,i,n,graph,color))
        {
            color[node]=i;
            if(Colorcheck(node+1,graph,m,n,color))return true;;
            color[node]=-1;
        }
    }

    return false;
}

string graphColoring(vector<vector<int>> &graph, int m) {
    // Write your code here
    int n=graph.size();
    
    vector<int> color(n,-1);
    
    if(Colorcheck(0,graph,m,n,color)) return "YES";
    return "NO";
}
