int longestSubSeg(vector<int> &nums , int n, int k){
    int maxi=0,count=0,i=0,j=0,l=k;
    
    while(i<n and j<n)
    {
        if(nums[j]==1)
        {
            j++;
            maxi=max(maxi,j-i);
        }
        else if(nums[j]==0)
            {
                if(l){
                    j++;
                    l--;
                    maxi=max(maxi,j-i);
                   }
            else{
                if(nums[i]==0)
                {
                    if(l<k)
                        l++;
                }
                i++;
            }
        }
    }
    return maxi;
}
