#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    if(K==0)
        return head;
    if(head==NULL)
        return head;
    
        LinkedListNode<int>* d=new LinkedListNode<int>(0),*f,*s;
        d->next=head;
        f=d,s=d;
        
        while(K--)
        {
            f=f->next;
        }
        while(f->next!=NULL)
        {
            f=f->next;
            s=s->next;
        }
        s->next=s->next->next;
        
        return d->next;
}
