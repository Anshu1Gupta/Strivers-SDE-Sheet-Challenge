#include<bits/stdc++.h>
using namespace std;
vector<int> dfs(int u,vector<int>&ans,vector<int>&visited,vector<int>adj[]){
    
    visited[u]=1;
    
    for(auto v:adj[u]){
        if(!visited[v]){
            dfs(v,ans,visited,adj);
        }
    }
    ans.push_back(u);

    return ans;
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
   vector<int>adj[V];
   for(auto it:edges){
       int u=it[0];
       int v=it[1];
       adj[u].push_back(v);
       adj[v].push_back(u);
   }

   vector<vector<int>>ans;
   vector<int>visited(V,0);
   for(int i=0;i<V;i++){
       if(!visited[i]){
        vector<int>result;
        ans.push_back(dfs(i,result,visited,adj));
       }
   }
   return ans;
}