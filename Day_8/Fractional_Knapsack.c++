#include <bits/stdc++.h> 
using namespace std;
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
   vector<pair<double,pair<double,double>>>pair;
   for(int i=0;i<n;i++){
       double pro=items[i].second;
       double wei=items[i].first;
       double fre=pro/wei;
       pair.push_back({fre,{pro,wei}});
   }
   sort(pair.begin(),pair.end());
   reverse(pair.begin(),pair.end());

double sum=0;
double ww=(double)w;
   for(int i=0;i<n;i++){
       double pro=pair[i].second.first;
       double wei=pair[i].second.second;
       if(ww>=pair[i].second.second){
           ww-=wei;
           sum+=pro;
       }
       else{
        
           double rem=ww/wei;
           sum+=rem*pro;
           ww=0;
           break;
       }
   }
   return sum;
}