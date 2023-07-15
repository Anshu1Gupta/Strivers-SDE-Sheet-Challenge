#include<bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& arr)
{
	int n=arr.size();
	int low=0;
	int high=n-1;
	while(low<high){
    int mid=(low+high)/2;  
    if(mid+1<n&&mid-1>=0&&(arr[mid]!=arr[mid+1]&&arr[mid]!=arr[mid-1]))return arr[mid];
    if(mid%2==0){
	    if(mid+1<n&&arr[mid]==arr[mid+1])low=mid+1;
	    else high=mid-1;
    }
    else{
	    if(mid-1>=0&&arr[mid]==arr[mid-1])low=mid+1;
	    else high=mid-1;
    }
	}
	return arr[low];
}