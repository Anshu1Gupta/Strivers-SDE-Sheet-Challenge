#include<bits/stdc++.h>
using namespace std;
void findSet(int ind,vector<int>&nums,vector<int>&ans,int sum){
     if(ind>=nums.size()){
	   ans.push_back(sum);
	   return;
	   }
	   findSet(ind+1,nums,ans,sum+nums[ind]);
	   findSet(ind+1,nums,ans,sum);
}
vector<int> subsetSum(vector<int> &num){
	vector<int>ans;
	findSet(0,num,ans,0);
	sort(ans.begin(),ans.end());
	return ans;	
}