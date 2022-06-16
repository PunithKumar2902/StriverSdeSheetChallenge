#include <bits/stdc++.h> 

Node *firstNode(Node *head)
{
        Node* slow=head,*fast=head;
	    while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            {
                //cout<<slow->val;
                slow=head;
                
                while(slow!=fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
        }
    return NULL;
}
