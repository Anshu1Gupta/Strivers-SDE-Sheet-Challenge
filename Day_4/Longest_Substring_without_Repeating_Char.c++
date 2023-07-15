#include <bits/stdc++.h> 
using namespace std;
int uniqueSubstrings(string input)
{
    int n=input.length();
  unordered_map<char,int>mp;
  int maxLen=1;
  int start=0;int end=0;
  while(end<n){
     mp[input[end]]++;

      if(mp[input[end]]==1){
        int currLen=end-start+1;
        maxLen=max(currLen,maxLen);
      }
   
         while(mp[input[end]]==2){
             mp[input[start]]--;
             if(mp[input[start]]<=0)mp.erase(mp[input[start]]);
             start++;
         }
    
  end++;
  }
  return maxLen;
}