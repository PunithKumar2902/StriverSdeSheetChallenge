#include <bits/stdc++.h> 
/********************************

    Following is the class structure of the Node class:
    
    class Node
    {
    	public:
    	    int data;
    	    Node *next;
    	    Node(int data)
    	    {
    	        this->data = data;
    	        this->next = NULL;
    	    }
    };

********************************/


Node *rotate(Node *head, int k) {
  
            if(!head)
            return head;
        
       Node* slow=head,*fast=head;
        int count=0;
        
        while(slow!=NULL)
        {
            count++;
            slow=slow->next;
        }
        k=k%count;
        
        for(int i=0;i<k;i++)
        {
            fast=fast->next;
        }
        
        slow=head;
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=head;
        head=slow->next;
        slow->next=NULL;
        
        return head;
    }
