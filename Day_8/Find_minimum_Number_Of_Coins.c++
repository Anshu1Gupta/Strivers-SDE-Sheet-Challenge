#include <bits/stdc++.h> 
using namespace std;
int findMinimumCoins(int amount) 
{
   vector<int>curr{1,2,5,10,20,50,100,500,1000};
   int n=curr.size();
   int coins=0;
   for(int i=n-1;i>=0;i--){
      if(amount>=curr[i]){
         int num=amount/curr[i];
         coins+=num;
         amount=amount-num*curr[i];
      }
   }
   return coins;
}
