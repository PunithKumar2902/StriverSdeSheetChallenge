#include<bits/stdc++.h>
bool comp(pair<int,int> a,pair<int,int> b){
             return ((float)a.second/a.first)>((float)b.second/b.first);
         }
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    sort(items.begin(),items.end(),comp);
    double max=0;
    
    for(int i=0;i<n;i++)
    {
        if(items[i].first>w)
        {
            max+=((float)items[i].second/items[i].first)*w;
            w=0;
            break;
        }
        w-=items[i].first;
        max+=items[i].second;
    }
    return max;
}
