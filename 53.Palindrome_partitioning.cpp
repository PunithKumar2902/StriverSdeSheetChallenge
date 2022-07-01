    vector<vector<string>> ans;
    
    bool isPal(int i,int j,string &s)
    {
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++,j--;
            }
            else
                return false;
        }
        return true;
    }

    
    void part(int ind,vector<string>&arr,string &s)
    {
        if(ind==s.size())
        {
            ans.push_back(arr);
            return;
        }
        
        for(int i=ind;i<s.size();i++)
        {
            if(isPal(ind,i,s))
            {
                arr.push_back(s.substr(ind,i-ind+1));
                part(i+1,arr,s);
                arr.pop_back();
            }
        }
    }
vector<vector<string>> partition(string &s) 
{
    ans.clear();
            vector<string> arr;
    
        part(0,arr,s);
        return ans;
}
