#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    if(s.size()==0)
            return 0;
        
        int start=0,i=0,ans=0;
        
        unordered_set<char> s1;
        while(i<s.size())
        {
          if(s1.find(s[i])==s1.end())
          {
              s1.insert(s[i]);
              ans=max(ans,i-start+1);
              i++;
          }
            else{
                s1.erase(s[start]);
                start++;
            }
        }
        return ans;
}
