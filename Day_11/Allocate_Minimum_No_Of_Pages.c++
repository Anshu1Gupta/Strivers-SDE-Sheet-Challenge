#include <bits/stdc++.h>
using namespace std;
long long int possible(long long int max_stu,long long int n ,vector<int>&time,long long int limit){
  long long int pages=0;
  long long int stu=1;
  for(int i=0;i<n;i++){
    if(time[i]>limit){
      return false;
    }
    else if(pages+time[i]>limit){
      stu++;
      pages=time[i];
    }
    else{
      pages+=time[i];
    }
  }
  if(stu>max_stu)return false;
  return true;
} 
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	long long int ans=-1;
  long long int low=*min_element(time.begin(),time.end());
  long long int high=0;
  for(int i=0;i<m;i++){
    high+=time[i];
  }
  
  while(low<=high){
    long long int mid=(low+high)/2;
    
    if(possible(n,m,time,mid)){
      ans=mid;
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  return ans;
}