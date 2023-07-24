#include <bits/stdc++.h> 
using namespace std;


    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

void preorder(vector<int>&ans,TreeNode<int> *root,int level){
    if(root==NULL)return;
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    preorder(ans,root->left,level+1);
    preorder(ans,root->right,level+1);
}
vector<int> getLeftView(TreeNode<int> *root)
{
   vector<int>ans;
   preorder(ans,root,0);
   return ans;
}