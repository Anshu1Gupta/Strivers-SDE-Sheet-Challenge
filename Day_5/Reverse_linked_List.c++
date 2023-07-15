#include <bits/stdc++.h>
using namespace std;
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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int>*p=NULL;
    LinkedListNode<int>*q=NULL;
    LinkedListNode<int>*r=head;
    while(r!=NULL){
      p=q;
      q=r;
      r=r->next;
      q->next=p;
    }
    return q;
    
}