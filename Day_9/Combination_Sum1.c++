#include<bits/stdc++.h>
void findSet(int ind,int target,vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans){
    
    if(ind>=arr.size()){
      if (target == 0) {
        ans.push_back(temp);
    }
        return;
    
    }
    
    temp.push_back(arr[ind]);
    findSet(ind+1,target-arr[ind],arr,temp,ans);
    temp.pop_back();
    findSet(ind+1,target,arr,temp,ans);
    
    
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<int>temp;
    vector<vector<int>>ans;
    findSet(0,k,arr,temp,ans);
    sort(ans.begin(),ans.end());
    return ans;
}