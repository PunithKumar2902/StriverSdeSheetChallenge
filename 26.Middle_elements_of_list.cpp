#include <bits/stdc++.h> 

Node *findMiddle(Node *head) {
    // Write your code here
        Node* slow=head,*fast=head;
        
        while(fast!=NULL and fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
}
