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

TreeNode<int> *buildTree(vector<int>&inorder,int inStart,int inEnd,vector<int>&preorder,int preStart,int preEnd,map<int,int>inMap){
    if(inStart>inEnd||preStart>preEnd)return NULL;
     TreeNode<int> *root=new TreeNode<int>(preorder[preStart]);

    int index=inMap[root->data];
    int upto=index-inStart;
     
     root->left=buildTree(inorder,inStart,index-1,preorder,preStart+1,preStart+upto,inMap);
     root->right=buildTree(inorder,index+1,inEnd,preorder,preStart+upto+1,preEnd,inMap);
    
}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
    map<int,int>inMap;
    for(int i=0;i<inorder.size();i++){
        inMap[inorder[i]]=i;
    }
	return buildTree(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1,inMap);
}