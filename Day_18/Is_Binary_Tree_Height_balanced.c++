#include <bits/stdc++.h> 
using namespace std;
 

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

int height(BinaryTreeNode<int>* root){
    if(root==NULL)return 0;
    int left=height(root->left);
    int right=height(root->right);
    return 1+max(left,right);
}

bool isBalancedBT(BinaryTreeNode<int>* root) {
    if(root==NULL)return true;
    int leftH=height(root->left);
    int rightH=height(root->right);
    
    if(abs(leftH-rightH)>=2)return false;
    
    bool left=isBalancedBT(root->left);
    bool right=isBalancedBT(root->right);
    
    return left&right;
}