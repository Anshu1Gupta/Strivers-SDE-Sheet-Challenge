#include<bits/stdc++.h> 
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>>ans;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){
		if(i>0&&(arr[i]==arr[i-1]))continue;
       int remain=K-arr[i];
	   int low=i+1,high=n-1;
	   while(low<high){
		   int sum=arr[low]+arr[high];
		   if(sum>remain){
			   high--;
		   }
		   else if(sum<remain){
			   low++;
		   }
		   else{
			   ans.push_back({arr[i],arr[low],arr[high]});
			   int t1=low,t2=high;
			   while(arr[low]==arr[t1])low++;
			   while(arr[high]==arr[t2])high--;
		   }
	   }

	}
	return ans;
}