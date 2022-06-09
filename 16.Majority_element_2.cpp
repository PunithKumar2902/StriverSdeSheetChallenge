#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &nums)
{
    // Write your code here.
            int count1=0,count2=0,num1=INT_MIN,num2=INT_MIN;
        
        for(int n:nums)
        {
            if(n==num1)
            {
                count1++;
            }
            else if(n==num2)
            {
                count2++;
            }
            else if(count1==0)
            {
                num1=n;
                count1++;
            }
            else if(count2==0)
            {
                num2=n;
                count2++;
            }
            else 
            {
                count1--;
                count2--;
            }
        }
        count1=count2=0;
        for(int n:nums)
        {
            if(n==num1)
            {
                count1++;
            }
            if(n==num2)
            {
                count2++;
            }
        }
        
        vector<int> ans;
        
        if(count1>nums.size()/3)
            ans.push_back(num1);
        if(count2>nums.size()/3)
            ans.push_back(num2);
        
        return ans;
}
