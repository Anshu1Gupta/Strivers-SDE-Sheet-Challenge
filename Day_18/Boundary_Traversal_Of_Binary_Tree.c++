#include <bits/stdc++.h> 
using namespace std;

    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

bool isLeaf(TreeNode<int>*root){
   return !root->left&&!root->right;
}
void left(TreeNode<int>*root,vector<int>&res){
    TreeNode<int>*temp=root->left;
    while(temp!=NULL){
        if(!isLeaf(temp))
            res.push_back(temp->data);
        if(temp->left==NULL){
            temp=temp->right;
        }
        else{
            temp=temp->left;
        }
    }
}
void right(TreeNode<int>*root,vector<int>&res){
    // vector<int>ans;
    TreeNode<int>*cur=root->right;
  vector < int > tmp;
  while (cur) {
    if (!isLeaf(cur)) tmp.push_back(cur -> data);
    if (cur -> right) cur = cur -> right;
    else cur = cur -> left;
  }
  for (int i = tmp.size() - 1; i >= 0; --i) {
    res.push_back(tmp[i]);
  }
}
void leaf(TreeNode<int> * root, vector < int > & res) {
  if (isLeaf(root)) {
    res.push_back(root -> data);
    return;
  }
  if (root -> left) leaf(root -> left, res);
  if (root -> right) leaf(root -> right, res);
}
vector<int> traverseBoundary(TreeNode<int>* root){
   vector<int>res;
   if(root==NULL)return res;
   if(!isLeaf(root))res.push_back(root->data);
   left(root,res);
   leaf(root,res);
   right(root,res);
   return res;
}