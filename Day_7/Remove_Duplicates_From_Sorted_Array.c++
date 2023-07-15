#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {

	using namespace std;
	int count=1;
	for(int i=1;i<n;i++){
		if(arr[i]==arr[i-1]){
          continue;
		}
		else{
			count++;
		}
	}
	return count;
}