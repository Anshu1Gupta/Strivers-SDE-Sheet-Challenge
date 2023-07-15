#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &arr, int n)
{
    int ind=-1;
    for(int i=n-2;i>=0;i--){
      if(arr[i]<arr[i+1]){
          ind=i;break;
      }
    }
    if(ind==-1){
        sort(arr.begin(),arr.end());
        return arr;
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]>arr[ind]){
            swap(arr[i],arr[ind]);
            break;
        }
    }
    sort(arr.begin()+ind+1,arr.end());return arr;

}