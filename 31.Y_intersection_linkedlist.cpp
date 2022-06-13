#include <bits/stdc++.h> 

int findIntersection(Node *l1, Node *l2)
{
    Node *temp1=l1,*temp2=l2;
    while(temp1!=temp2)
    {
        if(temp1==NULL)
        {
            temp1=l2;
        }
        else 
            temp1=temp1->next;
        if(temp2==NULL)
        {
            temp2=l1;
        }
        else
            temp2=temp2->next;
    }
    if(temp1)
        return temp1->data;
    return -1;
}
