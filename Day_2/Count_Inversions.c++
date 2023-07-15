#include <bits/stdc++.h>
using namespace std; 
    long long int merge(long long *arr,vector<long long>&dummy,int low,int mid,int high){
    long long int count=0;
     long long int i=low,j=mid+1,k=low;
     while(i<=mid&&j<=high){
         if(arr[i]<=arr[j]){
             dummy[k++]=arr[i++];
         }
         else{
             count+=mid-i+1;
             dummy[k++]=arr[j++];
         }
     }
     while(i<=mid){
         dummy[k++]=arr[i++];
     }
     while(j<=high){
         dummy[k++]=arr[j++];
     }
     for(int i=low;i<=high;i++){
         arr[i]=dummy[i];
     }
     return count;
}
long long int mergeSort(long long *arr,vector<long long>&dummy,long long  low,long long high){
    long long count=0;
    if(low<high){
        int mid=(low+high)/2;
      count=count+ mergeSort(arr,dummy,low,mid);
      count=count+ mergeSort(arr,dummy,mid+1,high);
      count=count+ merge(arr,dummy,low,mid,high);
    }
    return count;
}
long long getInversions(long long *arr, int n){
    vector<long long>dummy(n);
    return mergeSort(arr,dummy,0,n-1);
}

