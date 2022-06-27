vector<vector<int>> ans;
    
void findComb(vector<int>& nums,vector<int> &sub,int target,int ind,int cur)
    {
        if(cur==target)
        {
            ans.push_back(sub);
        }
     
        for(int i=ind;i<nums.size();i++)
        {
            sub.push_back(nums[i]);
            findComb(nums,sub,target,i+1,cur+nums[i]);
            sub.pop_back();
        }
    }

vector<vector<int>> findSubsetsThatSumToK(vector<int> candidates, int n, int target)
{
    ans.clear();
    vector<int> sub;
    findComb(candidates,sub,target,0,0);
    return ans;
}
