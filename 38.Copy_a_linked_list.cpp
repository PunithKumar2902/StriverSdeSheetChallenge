#include <bits/stdc++.h> 

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
              
          LinkedListNode<int> *iter = head; 
          LinkedListNode<int> *front = head;

          while (iter != NULL) {
            front = iter->next;

            LinkedListNode<int> *copy = new LinkedListNode<int>(iter->data);
            iter->next = copy;
            copy->next = front;
            copy->random=NULL;

            iter = front;
          }
        
          iter = head;
          while (iter != NULL) {
            if (iter->random != NULL) {
              iter->next->random = iter->random->next;
            }
            iter = iter->next->next;
          }
        
          iter = head;
          LinkedListNode<int> *dummy = new LinkedListNode<int>(0);
          LinkedListNode<int> *copy = dummy;

          while (iter != NULL) {
            front = iter->next->next;

            // extract the copy
            copy->next = iter->next;

            // restore the original list
            iter->next = front;
              
            copy = copy -> next; 
            iter = front;
          }
    return dummy->next;
}
