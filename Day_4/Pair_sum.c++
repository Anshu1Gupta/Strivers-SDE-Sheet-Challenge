#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
  unordered_map<int,int>mp;
  vector<vector<int>>ans;
  for(int i=0;i<arr.size();i++){
     int need=s-arr[i];
     if(mp.find(need)!=mp.end()){
        int fre=mp[need];
        while(fre--){
         if(need<=arr[i])
        ans.push_back({need,arr[i]});

        else
        ans.push_back({arr[i],need});
        }
     }
     mp[arr[i]]++;
  }
  sort(ans.begin(),ans.end());
return ans;  
  
}