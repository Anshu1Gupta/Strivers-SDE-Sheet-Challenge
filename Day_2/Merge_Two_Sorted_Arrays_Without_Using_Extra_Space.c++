#include <bits/stdc++.h>
using namespace std;
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int left=m-1;
	int right=0;
	while(left>=0&&right<n){
		if(arr1[left]>=arr2[right]){
			swap(arr1[left],arr2[right]);
			left--;right++;
		}
		if(arr1[left]<arr2[right]){
			break;
		}
	}
	sort(arr1.begin(),arr1.begin()+m);
	sort(arr2.begin(),arr2.end());
	for(int i=0;i<arr2.size();i++){
		arr1[m]=arr2[i];
		m++;
	}
	return arr1;
}