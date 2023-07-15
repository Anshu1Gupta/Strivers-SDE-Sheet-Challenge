#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr, int n){
	int slow=arr[0];
	int fast=arr[arr[0]];
	while(fast!=slow){
		slow=arr[slow];
		fast=arr[arr[fast]];
	}
	fast=0;
	while(fast!=slow){
		slow=arr[slow];
		fast=arr[fast];
	}
	return fast;
}
