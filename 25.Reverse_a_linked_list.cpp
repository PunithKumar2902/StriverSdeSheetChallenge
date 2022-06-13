#include <bits/stdc++.h> 
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==NULL||head->next==NULL)
            return head;
        
        LinkedListNode<int>* node =reverseLinkedList(head->next);
            
        head->next->next=head;
        head->next=NULL;
        return node;
}
