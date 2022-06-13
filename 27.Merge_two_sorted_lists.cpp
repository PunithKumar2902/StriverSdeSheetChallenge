#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* ptr1, Node<int>* ptr2)
{
        if(ptr1==NULL)
        {
            return ptr2;
        }
        if(ptr2==NULL)
        {
            return ptr1;
        }
        Node<int> *temp;
        if(ptr1->data>ptr2->data)
            {
                    temp=ptr2;
                    ptr2=ptr1;
                    ptr1=temp;
            }
        
        temp=ptr1;
        Node<int> *ans=ptr1;
        ptr1=ptr1->next;
        
        while(ptr1!=NULL and ptr2!=NULL)
        {
            if(ptr1->data>ptr2->data)
            {
                       temp->next=ptr2;
                        ptr2=ptr2->next;
                        temp->next->next=ptr1;
                        temp=temp->next;
                
            }
            else{
                    ptr1=ptr1->next;
                    temp=temp->next;
            }
        }
         if(ptr1==NULL)
        {
            temp->next=ptr2;
        }
       else
           temp->next=ptr1;
        return ans;
}
