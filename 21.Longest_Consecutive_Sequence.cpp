#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
            unordered_map<int,int> mp;
        
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(!mp.count(nums[i]-1))
            {   int count=1,temp=nums[i];
            
                while(mp.find(temp+1)!=mp.end())
                {
                count++,temp++;   
                }
                if(ans<count)
                    ans=count;
            }
        }
      return ans;  
}
