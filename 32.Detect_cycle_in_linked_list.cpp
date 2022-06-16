#include <bits/stdc++.h> 

bool detectCycle(Node *head)
{
    Node* slow=head,*fast=head;
    
    while(fast!=NULL and fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return true;
    }
    return false;
}
