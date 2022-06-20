int removeDuplicates(vector<int> &nums, int n) {
	// Write your code here.
            int i=0;
        
        for(int j=0;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                nums[++i]=nums[j];
            }
        }
        return i+1;
}
