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


vector<int> getTopView(TreeNode<int> *root) {
     map<int,int>mp;
     if(root==NULL)
       return {};
    queue<pair<TreeNode<int> *,int>>q;
    q.push({root,0});
    mp[0]=root->val;
    while(!q.empty()){
      TreeNode<int> * node=q.front().first;
      int vertInd=q.front().second;
        q.pop();
        if(mp.find(vertInd)==mp.end()){
            mp[vertInd]=node->val;
        }
      if(node->left){
          q.push({node->left,vertInd-1});
      }
      if(node->right){
          q.push({node->right,vertInd+1});
      }
    }
    vector<int>ans;
    for(auto it:mp){
        ans.push_back(it.second);
    }
    return ans;
}