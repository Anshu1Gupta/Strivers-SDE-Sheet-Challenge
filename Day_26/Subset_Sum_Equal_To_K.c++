#include <bits/stdc++.h> \
using namespace std;
using namespace std;
bool ifExist(int ind,int target,int n,vector<int>&arr,vector<vector<int>>&dp){
    if(ind>=n){
        if(target==0)return true;
        return false;
    }
    if(dp[ind][target]!=-1)return dp[ind][target];
    bool take=false;
    if(target>=arr[ind]){
        take=ifExist(ind+1,target-arr[ind],n,arr,dp);
    }
    bool ntake=ifExist(ind+1,target,n,arr,dp);
    
    return dp[ind][target]=take|ntake;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    sort(arr.begin(),arr.end());
    vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
    return ifExist(0,k,n,arr,dp);
}