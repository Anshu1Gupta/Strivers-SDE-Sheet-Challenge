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

bool detectCycle(Node *head)
{
    if(head==NULL||head->next==NULL)return false;
    if(head->next==head)return true;
	Node*slow=head;
    Node*fast=head->next;
    while(fast!=NULL&&slow!=fast){
      slow=slow->next;
      fast=fast->next;
      if(fast)fast=fast->next;
    }
    if(fast==NULL)return false;
    return true;
}