#include <bits/stdc++.h> 
Node* merge_lists(Node* main,Node* temp)
{
        Node* dummy=new Node(0),*mem=dummy;
  
    while(main!=NULL and temp!=NULL)
    {
        if(main->data>temp->data)
        {
            mem->child=temp;
            temp=temp->child;
            mem=mem->child;
        }
        else{
            mem->child=main;
            main=main->child;
            mem=mem->child;
        }
    }
    if(main)
    {
        mem->child=main;
    }
    else
        mem->child=temp;
    dummy->child->next=NULL;
    return dummy->child;
}
Node* flattenLinkedList(Node* head) 
{
    if(head==NULL or head->next==NULL)
    {
        return head;
    }
    head->next=flattenLinkedList(head->next);
    
    head=merge_lists(head,head->next);
    
    return head;
}
