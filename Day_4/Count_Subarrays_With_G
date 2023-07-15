#include <bits/stdc++.h>
using namespace std;
int subarraysXor(vector<int> &arr, int k)
{
    int n=arr.size();
    int xr=0;
    int count=0;
        unordered_map<int,int>mp;

    mp[0]++;
    for(int i=0;i<n;i++){
        xr=xr^arr[i];
        
        int prev=xr^k;
        
       count+=mp[prev];
       mp[xr]++;
    }
    return count;
}
