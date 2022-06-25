int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    
    int i=1,j=0,maxi=1,count=1;
    while(i<n and j<n)
    {
         if(at[i]>dt[j])
         {
             //count--;
             i++;
             j++;
         }
        else
        {
             count++;
            maxi=max(maxi,count);
            i++;
        }
    }
    return maxi;
}
