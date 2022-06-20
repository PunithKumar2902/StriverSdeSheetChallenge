#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {
	        sort(nums.begin(),nums.end());
        
        vector<vector<int>> res;
        for(int i=0;i<n-2;i++)
        {
            if(i==0||(i>0 and nums[i]!=nums[i-1]))
            {
            int x=K-nums[i],l=i+1,r=nums.size()-1;
            
            while(l<r)
            {
                if(nums[l]+nums[r]==x)
                {
                    res.push_back({nums[i],nums[l],nums[r]});
                    while(l<r and nums[l]==nums[l+1])
                    {
                        l++;
                    }
                    while(l<r and nums[r-1]==nums[r])
                    {
                        r--;
                    }
                    l++,r--;
                }
                else if(nums[l]+nums[r]<x)
                {
                    l++;
                }
                else
                    r--;
            }
            }
        }
        return res;
}
