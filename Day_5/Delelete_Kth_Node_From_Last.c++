#include<bits/stdc++.h>
using namespace std;
// /*
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
// */

Node* removeKthNode(Node* head, int K)
{
    if(head==NULL)return head;
    
    Node*slow=head;
    Node*fast=head;
    while(K--){
        fast=fast->next;
    }
    if(fast==NULL)return head->next;
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    return head;
}
