#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(int arr[], int n) {
	int count=0;
	int num=arr[0];
	for(int i=0;i<n;i++){
		if(count==0){
			num=arr[i];
		}
		count+=(num==arr[i])?1:-1;
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i]==num)cnt++;
	}
	if(cnt>(n/2))return num;
	return -1;
}