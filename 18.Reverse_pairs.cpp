#include <bits/stdc++.h>

    int count=0;
    
    void merge(vector<int>& nums,int p,int mid,int q,int & count)
    {
     int j=mid+1;
        vector<int> arr(q-p+1);
        
        for(int i=p;i<=mid;i++)
        {
            while(j<=q and nums[i]>2LL*nums[j])
            {
                j++;
            }
            count+=(j-(mid+1));
        }
        
        int i=p;
        j=mid+1;
        int k=0;
        while(i<=mid and j<=q)
        {
            if(nums[i]>nums[j])
            {
                arr[k++]=nums[j++];
              
            }
            else
            {
                arr[k++]=nums[i++];
            }
                
        }
        while(i<=mid)
        {
             arr[k++]=nums[i++];
            
        }
        while(j<=q)
        {
             arr[k++]=nums[j++];
        }
        k=0;
        for(int i=p;i<=q;i++)
        {
            nums[i]=arr[k++];
        }
    }  
    
    void merge_sort(vector<int>& nums,int p,int q,int& count)
    {
        if(p<q)
        {
            int mid=(p+q)/2;
            
            merge_sort(nums,p,mid,count);
            merge_sort(nums,mid+1,q,count);
            merge(nums,p,mid,q,count);
        }
    }
int reversePairs(vector<int> &nums, int n){
        int count=0;
	        merge_sort(nums,0,n-1,count);
    
        return count;	
}
