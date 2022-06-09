#include <bits/stdc++.h> 
int findMajorityElement(int nums[], int n) {
	int count =0,candidate;
        
        for(int i=0;i<n;i++)
        {
            if(count==0)
                candidate=nums[i];
            if(nums[i]==candidate)
                count++;
            else
                count--;
        }
    count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==candidate)
                count++;
        }
        if(count>n/2)
            return candidate;
    return -1;
}
