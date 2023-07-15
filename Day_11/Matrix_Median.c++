#include<bits/stdc++.h>
using namespace std;
int cntNum(vector<int>&arr,int key){
    int low=0,high=arr.size()-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]<=key)low=mid+1;
        else high=mid-1;
    }
    return low;
}
int median(vector<vector<int>> &matrix, int n, int m) {
    int low=1;
    int high=1e9;
    while(low<=high){
              int count=0;

        int mid=(low+high)/2;

        for(int i=0;i<n;i++){
            count+=cntNum(matrix[i],mid);
        }
        if(count<=(n*m)/2){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}