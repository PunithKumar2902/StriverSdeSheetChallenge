#include<bits/stdc++.h>
vector<vector<int>> ans;
    void subs(vector<int>& nums,vector<int>& sub,int indx)
    {
        ans.push_back(sub);
        
        for(int j=indx;j<nums.size();j++)
        {
            if(j!=indx and nums[j]==nums[j-1])
            {
                continue;
            }
            sub.push_back(nums[j]);
            subs(nums,sub,j+1);
            sub.pop_back();
        }
        
    }

vector<vector<int>> uniqueSubsets(int n, vector<int> &nums)
{
    ans.clear();
   sort(nums.begin(),nums.end());
        vector<int> s;
        subs(nums,s,0);
        return ans;
}
