#include<bits/stdc++.h>
using namespace std;
int NthRoot(int n, int p) { 
  int low=1;
  int high=p;
  while(low<=high){
    int mid=(low+high)/2;
    if(pow(mid,n)==p)return mid;

    else if(pow(mid,n)>p){
     high=mid-1;
    }
    else low=mid+1;
  }
  return -1;
}