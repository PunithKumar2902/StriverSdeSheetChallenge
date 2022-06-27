#include<bits/stdc++.h>
vector<vector<int>> ans;
    void findComb(int ind,vector<int>& nums,vector<int> sub,int target)
    {
        if(ind==nums.size())
        {
            if(target==0)
            {
                ans.push_back(sub);
            }
            return;
        }
                
        int i=ind;
       
        if(nums[i]<=target)
        {    
        sub.push_back(nums[i]);   
        findComb(i+1,nums,sub,target-nums[i]);
        sub.pop_back();
        }   
         while(i<nums.size()-1 and nums[i]==nums[i+1])
        {
              i++;
        } 
        findComb(i+1,nums,sub,target);
    
    }

vector<vector<int>> combinationSum2(vector<int> &nums, int n, int target)
{
	// Write your code here.
    ans.clear();
            vector<int> sub;
        sort(nums.begin(),nums.end());
        findComb(0,nums,sub,target);
        
        return ans;
}
