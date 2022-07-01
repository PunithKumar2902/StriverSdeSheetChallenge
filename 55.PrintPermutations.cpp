vector<string> ans;

void perm(int ind,string &s)
{
     if(ind==s.size())
        {
            ans.push_back(s);  
            return ;
        }
        
        for(int i=ind;i<s.size();i++)
        {
            swap(s[i],s[ind]);
            perm(ind+1,s);
            swap(s[i],s[ind]);
        }
}

vector<string> findPermutations(string &s) {

    ans.clear();
    perm(0,s);
    return ans;
}
