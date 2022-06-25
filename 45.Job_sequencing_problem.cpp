#include<bits/stdc++.h>
int jobScheduling(vector<vector<int>> &jobs)
{
    sort(jobs.begin(),jobs.end(),[](vector<int> a,vector<int> b){
        return a[1]>b[1];
    });
    
    vector<bool> space(jobs.size()+1,false);
    int profit=0;
    
    for(int i=0;i<jobs.size();i++)
    {
        for(int j=jobs[i][0];j>0;j--)
        {
            if(!space[j])
            {
                space[j]=true;
                profit+=jobs[i][1];
                break;
            }
        }
    }
    return profit;
}
