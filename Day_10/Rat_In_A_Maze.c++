#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>dir{{-1,0},{1,0},{0,1},{0,-1}};
// vector<pair<char,pair<int,int>>>dir{{'U',{-1,0}},{'D',{1,0}},{'R',{0,1}},{'L',{0,-1}}};

void findDir(int i,int j,vector<vector<int>>&a,vector<string>&ans,string move,vector<vector<int>>&vis,int n,int m){
    if(i==n-1&&j==m-1){
        ans.push_back(move);
        return;
    }

      if (i + 1 < n && !vis[i + 1][j] && a[i + 1][j] == 1) {
      vis[i][j] = 1;
      findDir(i + 1, j, a, ans, move + 'D', vis,n,m);
      vis[i][j] = 0;
    }


    if (j - 1 >= 0 && !vis[i][j - 1] && a[i][j - 1] == 1) {
      vis[i][j] = 1;
      findDir(i, j - 1, a, ans, move + 'L', vis,n,m);
      vis[i][j] = 0;
    }

    if (j + 1 < n && !vis[i][j + 1] && a[i][j + 1] == 1) {
      vis[i][j] = 1;
      findDir(i, j + 1, a, ans, move + 'R', vis,n,m);
      vis[i][j] = 0;
    }


    if (i - 1 >= 0 && !vis[i - 1][j] && a[i - 1][j] == 1) {
      vis[i][j] = 1;
      findDir(i - 1, j, a, ans, move + 'U', vis,n,m);
      vis[i][j] = 0;
    }
}
vector<string> ratMaze(vector<vector<int>> &mat) {
     vector<string>ans;
    int n=mat.size();
    int m=mat[0].size();
    vector<vector<int>>visited(n,vector<int>(m,0));
    string temp="";
    findDir(0, 0, mat, ans, "", visited,n,m);
    return ans;
    
}