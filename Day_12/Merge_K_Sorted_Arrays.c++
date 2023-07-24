#include <bits/stdc++.h> 
using namespace std;
vector<int> mergeSort(vector<int>&l1,vector<int>&l2){
    int i=0,j=0;
    vector<int>ans;
    while(i<l1.size()&&j<l2.size()){
        if(l1[i]<l2[j]){
            ans.push_back(l1[i++]);
        }
        else{
            ans.push_back(l2[j++]);
        }
    }
    while(i<l1.size()){
        ans.push_back(l1[i++]);
    }
    while(j<l2.size()){
        ans.push_back(l2[j++]);
    }
    return ans;
}
vector<int> merge(vector<vector<int>>&KArrays,int low,int high){
    
     if(high==low)return KArrays[low];
      if(low<high){
        int mid=(low+high)/2;
        vector<int>l1=merge(KArrays,low,mid);
        vector<int>l2=merge(KArrays,mid+1,high);
        return mergeSort(l1,l2);
      }
    }

vector<int> mergeKSortedArrays(vector<vector<int>>&KArrays, int k)
{
  return merge(KArrays,0,k-1);
}
