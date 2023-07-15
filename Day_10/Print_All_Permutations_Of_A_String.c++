#include <bits/stdc++.h> 
void findSet(string str,string temp,vector<string>&ans,vector<int>&visited){
    if(temp.size()==str.size()){
        ans.push_back(temp);
        return;
    }

    for(int i=0;i<str.size();i++){
        if(!visited[i]){
            visited[i]=1;
            findSet(str,temp+str[i],ans,visited);
            visited[i]=0;
        }

    }
}
vector<string> findPermutations(string &str) {
   vector<string>ans;
   string temp;
   vector<int>visited(str.size()+1,0);
   findSet(str,temp,ans,visited);
   return ans;
}