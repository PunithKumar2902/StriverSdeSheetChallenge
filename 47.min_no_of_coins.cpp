int findMinimumCoins(int amount) 
{
    int arr[]={1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int coins=0,money=amount;
    for(int i=8;i>=0;i--)
    {
        if(arr[i]<=money)
        {
            if(money==0)
        {
            break;
        }
        coins+=money/arr[i];
        money=money%arr[i];
      }
    }
    return coins;
}
