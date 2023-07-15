#include<bits/stdc++.h>
using namespace std;
double median(vector<int>& a, vector<int>& b) {
	if(a.size()>b.size()){
		return median(b,a);
	}
	int m=a.size();
	int n=b.size();

	int low=0,high=m,medianPos=(n+m+1)/2;

	while(low<=high){
		int cut1=(low+high)/2;
		int cut2=medianPos-cut1;

		int l1=cut1==0?INT_MIN:a[cut1-1];
		int l2=cut2==0?INT_MIN:b[cut2-1];
		int r1=cut1==m?INT_MAX:a[cut1];
		int r2=cut2==n?INT_MAX:b[cut2];

		if(l1<=r2&&l2<=r1){
			if((m+n)%2==0){
				return (max(l1,l2)+min(r1,r2))/(2.0);
			}
			else{
				return max(l1,l2)*1.0;
			}
		}

		if(l1>r2)high=cut1-1;
		else low=cut1+1;
	}
	return 0.0;
}