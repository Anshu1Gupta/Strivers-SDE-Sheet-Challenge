#include<bits/stdc++.h>
using namespace std;
//   Definition for linked list.
  class Node {
   public:
 		int data;
 		Node *next;
  		Node *child;
 		Node() : data(0), next(nullptr), child(nullptr){};
 		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
  };
 Node* merge(Node*first,Node*second){
	 if(first==NULL)return second;
	 if(second==NULL)return first;
	 if(first->data<=second->data){
		 first->child=merge(first->child,second);
		 return first;
	 }
	 else{
		 second->child=merge(first,second->child);
		 return second;
	 }
	 return NULL;
 }

Node* flattenLinkedList(Node* head) 
{

	if(head == NULL)

    {
        return head;
    }

    Node* down = head;
    Node* right = head->next;
    down->next = NULL;
    right = flattenLinkedList(right);
    Node* ans = merge(down, right);
    return ans;
}