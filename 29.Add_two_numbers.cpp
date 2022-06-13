#include <bits/stdc++.h> 
/****************************************************************

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

*****************************************************************/

Node *addTwoNumbers(Node *head1, Node *head2)
{
    Node* ans=new Node(0);
    Node* temp=ans;
    int carry=0,value;
    while(!(head1==NULL and head2==NULL))
    {
        value=(head1?head1->data:0) +(head2?head2->data:0)+carry;
        carry=value/10;
        value=value%10;
        
        temp->next=new Node(value);
        temp=temp->next;
        if(head1)head1=head1->next;
        if(head2)head2=head2->next;
    }
    if(carry)
    {
        temp->next=new Node(carry);
        temp=temp->next;
    }
    return ans->next;
}
