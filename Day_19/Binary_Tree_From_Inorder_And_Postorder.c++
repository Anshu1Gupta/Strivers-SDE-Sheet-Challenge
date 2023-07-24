#include<bits/stdc++.h>

using namespace std;
   
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   

TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
     map<int,int>inMap;
     for(int i=0;i<inOrder.size();i++){
          inMap[inOrder[i]]=i;
     }
     return constructTree(postOrder,0,postOrder.size()-1,inOrder,0,inOrder.size()-1,inMap);
}
