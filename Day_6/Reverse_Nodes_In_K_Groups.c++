#include <bits/stdc++.h>
using namespace std;
// /****************************************************************

    // Following is the class structure of the Node class:

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


pair<Node*,Node*>rev(Node*r,int len){
	Node*p=NULL,*q=NULL,*temp=r;
	
	while(r!=NULL&&len--){
		p=q;
		q=r;
		r=r->next;
		q->next=p;
	}

	return {q,r};
}
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	
if(head==NULL||head->next==NULL||b[0]==0)return head;
int i=1;
pair<Node*,Node*>p=rev(head,b[0]);
Node*entry=p.first;
Node*start=entry;
Node*r=p.second;
        i=1;
        while(r!=NULL&&i<n){
			while(b[i]==0)i++;
           while (entry->next != NULL) {
                  entry = entry->next;
                }
	 pair<Node*,Node*>p=rev(r,b[i]);
	 entry->next=p.first;
		r=p.second;
		i++;
}
if(r!=NULL){
	 while (entry->next != NULL) {
                  entry = entry->next;
                }
				entry->next=r;
}
	  return start;
    }