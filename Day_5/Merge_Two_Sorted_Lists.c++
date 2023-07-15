#include <bits/stdc++.h>
using namespace std;
// /************************************************************

    // Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

// ************************************************************/
Node<int>*merge(Node<int>*first,Node<int>*second){
    if(first==NULL)return second;
    if(second==NULL)return first;
        if(first->data<=second->data){
            first->next=merge(first->next,second);
            return first;
        }
        else{
            second->next=merge(first,second->next);
            return second;
        }
        return NULL;
    
    
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int>*ans=merge(first,second);

}
