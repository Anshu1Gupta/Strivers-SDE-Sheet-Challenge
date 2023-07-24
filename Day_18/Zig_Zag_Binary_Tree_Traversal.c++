#include <bits/stdc++.h>
using namespace std; 

    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};


vector<int> zigzagTreeTraversal(TreeNode<int> *root)
{

   vector<int>ans;
   queue<TreeNode<int> *>q;
    if(root==NULL)return ans;
   q.push(root);
   int flag=0;
   while(!q.empty()){
       int size=q.size();
       vector<int>temp(size);
       for(int i=0;i<size;i++){
           temp[i]=q.front()->data;

           if(q.front()->left){
               q.push(q.front()->left);
           }
           if(q.front()->right){
               q.push(q.front()->right);
           }
           q.pop();
       }
       if(flag==0){
           for(int i=0;i<size;i++){
               ans.push_back(temp[i]);
           }
       }
       else{
           for(int i=size-1;i>=0;i--){
               ans.push_back(temp[i]);
           }
       }
       flag=!flag;
   }
   return ans;
}