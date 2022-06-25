#include<bits/stdc++.h>
bool comp(pair<int,int> a,pair<int,int> b)
{
    if(a.second==b.second)
        return a.first<b.first;
    return a.second<b.second;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    
    vector<pair<int,int>> jobs;
    
    for(int i=0;i<start.size();i++)
    {
        jobs.push_back({start[i],finish[i]});
    }
    
    sort(jobs.begin(),jobs.end(),comp);
    
    int count=1,limit=jobs[0].second;
    
    for(int i=1;i<start.size();i++)
    {
        if(limit<=jobs[i].first)
        {
            count++;
            limit=jobs[i].second;
        }
    }
    return count;
}
