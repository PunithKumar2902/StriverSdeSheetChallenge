#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    int count=0,xorr=0;
    unordered_map<int,int> mp;
    
    for(int i=0;i<arr.size();i++)
    {
        xorr=xorr^arr[i];
        if(xorr==x)
        {
            count++;
        }
        if(mp.count(xorr^x))
        {
            count+=mp[xorr^x];
        }
        mp[xorr]++;
    }
    return count;
}
