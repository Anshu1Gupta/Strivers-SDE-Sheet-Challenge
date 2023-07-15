#include <bits/stdc++.h> 
using namespace std;
long getTrappedWater(long *arr, int n){
   vector<long>leftMax(n),rightMax(n);
   leftMax[0]=arr[0];
   rightMax[n-1]=arr[n-1];
   for(int i=1;i<n;i++){
       leftMax[i]=max(leftMax[i-1],arr[i]);
       rightMax[n-i-1]=max(rightMax[n-(i)],arr[n-i-1]);
   }
   long ans=0;
   for(int i=0;i<n;i++){
       ans+=min(leftMax[i],rightMax[i])-arr[i];
   }
   return ans;
}