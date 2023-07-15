#include<bits/stdc++.h>
using namespace std;
//  Definition for singly-linked list.
 class Node {
 public:
     int data;
     Node *next;
     Node() : data(0), next(nullptr) {}
     Node(int x) : data(x), next(nullptr) {}
     Node(int x, Node *next) : data(x), next(next) {}
};

Node *rotate(Node *head, int k) {
   Node*slow=head;
   Node*fast=head;
   int size=0;
   Node*temp=head;
  
   while(temp!=NULL){
        temp=temp->next;
        size++;
   }
   k=k%size;
    if(k==0)return head;
   while(k--){
        fast=fast->next;
   }
   while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
   }
   Node*ans=slow->next;
   fast->next=head;
   slow->next=NULL;
return ans;
}