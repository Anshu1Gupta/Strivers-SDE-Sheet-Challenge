#include<bits/stdc++.h>
using namespace std;
// /**
//   Definition of linked list:
 
  class Node {
  public:
       int data;
       Node *next;
       Node() {
           this->data = 0;
           this->next = NULL;
       }
       Node(int data) {
           this->data = data;
           this->next = NULL;
       }
       Node (int data, Node *next) {
           this->data = data;
           this->next = next;
       }
  };
//  *
//  *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    int carry=0;
    Node* ans=new Node(-1);
    Node*result=ans;
    while(num1&&num2){
        int sum=num1->data+num2->data+carry;

        if(sum>=10){
            carry=1;
            num2->data=sum%10;
        }
        else{
            carry=0;
            num2->data=sum;
        }
        ans->next=num2;
        ans=ans->next;
        num2=num2->next;
        num1=num1->next;

    }
    while(num1){
        int sum=num1->data+carry;
        if(sum>=10){
            num1->data=sum%10;
            carry=1;
        }
        else {
            num1->data=sum;
            carry=0;
        }
        ans->next=num1;
        ans=ans->next;
        num1=num1->next;
    }
    while(num2){
        int sum=num2->data+carry;
        if(sum>=10){
            num2->data=sum%10;
            carry=1;
        }
        else{
            num2->data=sum;
            carry=0;
        }
        ans->next=num2;
        ans=ans->next;
        num2=num2->next;
    }
    if(carry==1){
        Node* extra=new Node(1);
        ans->next=extra;
        ans=ans->next;
    }
    return result->next;
}
