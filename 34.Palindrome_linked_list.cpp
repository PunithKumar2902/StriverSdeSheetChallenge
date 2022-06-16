#include <bits/stdc++.h> 

bool isPalindrome(LinkedListNode<int> *head) {
    
    LinkedListNode<int>* temp,*prev=NULL,*next,*fast,*slow=head;

    fast=head;
        
    while(fast&&fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
        
    while(slow)
    {
        next=slow->next;
        slow->next=prev;
        prev=slow;
        slow=next;
    }
        
        slow=prev;
        fast=head;
        
        while(slow)
        {
            if(fast->data!=slow->data)
                return false;
            
            fast=fast->next;
            slow=slow->next;
        }
        return true;

}
