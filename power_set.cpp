vector<vector<int>> ans;

void subsets(vector<int> &v,vector<int> &set,int ind)
{
    if(ind==v.size())
    {
        ans.push_back(set);
        return;
    }
    set.push_back(v[ind]);
    subsets(v,set,ind+1);
    set.pop_back();
    
    subsets(v,set,ind+1);
}

vector<vector<int>> pwset(vector<int>v)
{
    vector<int> set;
    ans.clear();
    subsets(v,set,0);
    return ans;
}
