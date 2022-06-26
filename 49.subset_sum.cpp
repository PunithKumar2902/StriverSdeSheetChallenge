vector<int> ans;

void sub(vector<int> num,int indx,int sum)
{
    ans.push_back(sum);
    for(int  j=indx;j<num.size();j++)
    {
        sum+=num[j];
        sub(num,j+1,sum);
        sum-=num[j];
    }
}

vector<int> subsetSum(vector<int> &num)
{
    ans.clear();
    sub(num,0,0);
    sort(ans.begin(),ans.end());
    return ans;
}
