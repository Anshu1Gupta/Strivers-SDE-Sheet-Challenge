#include <bits/stdc++.h> 
using namespace std;
    void merge(vector<int> &arr,vector<long long>&dummy,int low,int mid,int high){
   
     long long int i=low,j=mid+1,k=low;
     while(i<=mid&&j<=high){
         if(arr[i]<=arr[j]){
             dummy[k++]=arr[i++];
         }
         else{
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
   
}
int countPairs(vector<int> &arr,int low,int mid,int high){
    long long count=0;
    int i=low;
    int right=mid+1;
    while(i<=mid){
        while(right<=high&&(arr[i]>2*arr[right]))right++;
        count+=(right-mid-1);
        i++;
    }
    return count;
}
long long int mergeSort(vector<int> &arr,vector<long long>&dummy,long long  low,long long high){
    long long count=0;
    if(low<high){
        int mid=(low+high)/2;
      count=count+ mergeSort(arr,dummy,low,mid);
      count=count+ mergeSort(arr,dummy,mid+1,high);
      count=count+ countPairs(arr,low,mid,high);
     
      merge(arr,dummy,low,mid,high);
    }
    return count;
}


int reversePairs(vector<int> &arr, int n){
	vector<long long>dummy(n);
	return mergeSort(arr,dummy,0,n-1);	
}





//   1 2 3        2 3 1
 
//  1 2   3      2 3   1

//  1 2 3        2 3 1
//  1 2   3      2 3   1
//  1 2 3        1 2 3


