#include <bits/stdc++.h>
using namespace std;
string fourSum(vector<int> arr, int target, int n) {

    unordered_map<int,pair<int,int>>mp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int sum=arr[i]+arr[j];
            mp[sum]={i,j};
        }
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int need=target-(arr[i]+arr[j]);
            if(mp.find(need)!=mp.end()){
               pair<int,int>p=mp[need];
               if(p.first!=i&&p.second!=j)return "Yes";
            }
        }
    }
    return "No";

  
}
