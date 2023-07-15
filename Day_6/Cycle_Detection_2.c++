#include<bits/stdc++.h>
using namespace std;
// /****************************************************************

    // Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


// *****************************************************************/

Node *firstNode(Node *head)
{
    if(head==NULL||head->next==NULL)return NULL;
    if(head->next==head)return head;
	Node*slow=head;
    Node*fast=head;
    do{
        slow=slow->next;
        fast=fast->next;
        if(fast)fast=fast->next;
    }while(fast!=NULL&&slow!=fast);
    if(fast==NULL)return NULL;
    fast=head;
    while(fast!=slow){
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
   
}