#include <bits/stdc++.h> 
using namespace std;


    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };


int height(TreeNode<int> *root){
    if(root==NULL)return 0;
    int left=height(root->left);
    int right=height(root->right);

    return max(left,right)+1;
}
int maxDepth(TreeNode<int> *root) {
   return height(root)-1;
}