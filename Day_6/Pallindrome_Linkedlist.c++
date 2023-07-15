#include <bits/stdc++.h> 
using namespace std;
// /****************************************************************

    // Following is the class structure of the LinkedListNode class:

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

// *****************************************************************/


bool isPalindrome(LinkedListNode<int> *head) {
    if(head==NULL||head->next==NULL)return true;
        LinkedListNode<int>*p=NULL,*q=NULL,*r=head;
       if(head==NULL||head->next==NULL)return true;
       LinkedListNode<int>*fast=head;
       if(fast!=NULL&&fast->next!=NULL&&fast->next->next==NULL&&fast->data!=fast->next->data)
           return false;
       do{
           if(fast)fast=fast->next;
           if(fast)fast=fast->next;
           if(r){
               p=q;
               q=r;
               r=r->next;
               q->next=p;
           }
     
       }while(fast!=NULL&&fast->next!=NULL);

       LinkedListNode<int>*front=r;
       LinkedListNode<int>*back=q;
      if(fast!=NULL){
          front=r->next;
      }
     
       while(back!=NULL&&front!=NULL){
           if(back->data!=front->data)return false;
           front=front->next;
           back=back->next;
           
       }

  return true;

}