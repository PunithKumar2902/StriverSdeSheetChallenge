#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    
        int ans=0,n=prices.size(),buy=prices[0]; 
      
        for(int i=0;i<n;i++)
        {
            ans=max(ans,prices[i]-buy);
            if(prices[i]<buy)
            {
             buy=prices[i];   
            }
        }
        return ans;
}
