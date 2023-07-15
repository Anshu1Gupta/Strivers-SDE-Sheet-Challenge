#include<bits/stdc++.h>
using namespace std;
int longestSubSeg(vector<int> &arr , int n, int k){
   int maxi=0;
   int start=0;
   int one=0;
   int end=0;
   while(end<n){
       if(arr[end]==0){
           one++;
       }
       if(one<=k){
        int len=end-start+1;
        maxi=max(maxi,len);
       }
       else{
           while(start<end&&arr[start]==1)start++;
           if(start<end){
               start++;
               one--;
           }
       }
       end++;
   }
   return maxi;
}
