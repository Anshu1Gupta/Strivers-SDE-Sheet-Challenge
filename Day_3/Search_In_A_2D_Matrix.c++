#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& arr, int target) {
        int row=arr.size()-1;
        int i=0,j=arr.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid][0]==target)return true;

            else if(arr[mid][0]>target){
                row=mid-1;
                j=mid-1;
            }
            else i=mid+1;
        }
        if(row==-1)return false;
        
        i=0,j=arr[0].size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[row][mid]==target)return true;
            else if(arr[row][mid]>target){
                j=mid-1;
            }
            else i=mid+1;
        }
        return false;
}