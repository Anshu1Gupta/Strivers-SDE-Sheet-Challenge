#include<bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
long long ans=-1e9;
long long sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
    ans=max(ans,sum);
    if(sum<0){
        sum=0;
        ans=max(ans,sum);

    }
}
return ans;
}