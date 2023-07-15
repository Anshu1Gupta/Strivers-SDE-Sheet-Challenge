#include <bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {
  int n=arr.size();
  unordered_map<int,int>mp;
  vector<int>prefSum(n);
  prefSum[0]=arr[0];
  mp[0]=-1;
  for(int i=1;i<n;i++){
    prefSum[i]=prefSum[i-1]+arr[i];
  }
  int maxlen=0;
  for(int i=0;i<n;i++){
    if(mp.find(prefSum[i])!=mp.end()){
      int len=(i-mp[prefSum[i]]);
      maxlen=max(maxlen,len);
    }
    else{
      mp[prefSum[i]]=i;
    }
  }
  return maxlen;

}