#include<bits/stdc++.h>
using namespace std;
struct meeting
{
    int start,end;
    int pos;
};

vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    vector<int> ans;
    
    vector<struct meeting> meetings(start.size());
    
    for(int i=0;i<start.size();i++)
    {
        meetings[i].start=start[i];
        meetings[i].end=end[i];
        meetings[i].pos=i+1;
    }
    
    std::sort(meetings.begin(),meetings.end(),[](struct meeting a,struct meeting b)
         {
             if(a.end==b.end)
                 return a.pos<b.pos;
             return a.end<b.end;
         });
    
        ans.push_back(meetings[0].pos);
    for(int i=1;i<start.size();i++)
    {
         if(!ans.empty())
         {
             if(end[ans.back()-1]<meetings[i].start)
             {
                 ans.push_back(meetings[i].pos);
             }
         }
    }
   return ans; 
}
