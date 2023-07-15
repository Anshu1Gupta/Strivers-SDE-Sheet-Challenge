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

Node* findIntersection(Node *firstHead, Node *secondHead){
Node*ans=NULL;
stack<Node*>st1,st2;
while(firstHead!=NULL){
    st1.push(firstHead);
    firstHead=firstHead->next;
}
while(secondHead!=NULL){
    st2.push(secondHead);
    secondHead=secondHead->next;
}
while(!st1.empty()&&!st2.empty()){
   if(st1.top()==st2.top()){
       ans=st1.top();
       st1.pop();
       st2.pop();
   }
   else return ans;
}
   return ans;
}