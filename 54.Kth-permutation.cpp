    string ans;
    vector<int> fact;

    void kperm(string &ans,int k,vector<int> &nums)
    {
      if(nums.empty())
      {
          return;
      }
        
        int n=fact[nums.size()-1];
        
        ans.push_back('0'+nums[k/n]);
        nums.erase(nums.begin()+k/n);
        
        kperm(ans,k%n,nums);
    }

string kthPermutation(int n, int k) {
        
        vector<int> nums;
        ans.clear();
        fact.resize(n+1);
        fact[0]=1;
        for(int i=1;i<=n;i++)
        {
            fact[i]=fact[i-1]*i;
            nums.push_back(i);
        }
        kperm(ans,k-1,nums);
    return ans;
}
