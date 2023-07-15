#include<bits/stdc++.h>
using namespace std;
bool isPossible(int node,int k,vector<int>adj[],vector<int>&coloured){
    for(auto it:adj[node]){
        if(coloured[it]==k)return false;
    }
    return true;
}
bool canColour(int node,vector<int>adj[],int m,vector<int>&coloured,int V){
    if(node>V)return true;
        if(coloured[node]==-1){
            for(int k=1;k<=m;k++){
                if(isPossible(node,k,adj,coloured)){
                    coloured[node]=k;
                   if( canColour(node+1,adj,m,coloured,V))return true;
                    coloured[node]=-1;
                }
            }
            return false;
          }
}
string graphColoring(vector<vector<int>> &mat, int m) {
    int n=mat.size();
   vector<int>adj[n+1];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(mat[i][j]==1){
               adj[i].push_back(j);
               adj[j].push_back(i);
           }
       }
   }

vector<int>coloured(n+1,-1);
if(canColour(1,adj,m,coloured,n))return "YES";
return "NO";
}