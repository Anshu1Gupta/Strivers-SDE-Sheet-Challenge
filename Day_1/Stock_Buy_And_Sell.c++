#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
    int buy=prices[0];
    int result=INT_MIN;
    int n=prices.size();
    for(int i=1;i<n;i++){
   if(buy>=prices[i]){
       buy=prices[i];
   }
   else{
       result=max(result,prices[i]-buy);
   }

    }

    return max(result,prices[n-1]-buy);
}