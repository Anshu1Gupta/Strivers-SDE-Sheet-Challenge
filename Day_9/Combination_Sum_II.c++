#include<bits/stdc++.h>
using namespace std;
	void findSet(int ind,int target,vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans){
    
    if(ind>=arr.size()){
      if (target == 0) {
		sort(temp.begin(),temp.end());
        ans.push_back(temp);
    }
        return;
    
    }
    
    temp.push_back(arr[ind]);
    findSet(ind+1,target-arr[ind],arr,temp,ans);
    temp.pop_back();
	while(ind+1<arr.size()&&arr[ind]==arr[ind+1])ind++;
    findSet(ind+1,target,arr,temp,ans);
    
    
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int k)
{
    vector<int>temp;
    vector<vector<int>>ans;
	sort(arr.begin(),arr.end());
    findSet(0,k,arr,temp,ans);
    sort(ans.begin(),ans.end());
    return ans;
}