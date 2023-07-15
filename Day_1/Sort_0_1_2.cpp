#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
   int low=0;
   int high=n-1;
   int mid=0;
   
int i=0;
while(mid<=high){
   if(arr[mid]==0){
      swap(arr[mid],arr[low]);
      mid++;
      low++;
   }
   else if(arr[mid]==1){
      mid++;
   }
   else if(arr[mid]==2){
      swap(arr[mid],arr[high]);
      high--;
   }
}
}