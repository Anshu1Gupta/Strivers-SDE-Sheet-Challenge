#include <bits/stdc++.h>
using namespace std;
void findWays(int ind,vector<string>&ans,vector<string>&dummy,string str,unordered_map<string,int>&mp){
  if(ind>=str.size()){
      string st;
      for(auto it:dummy){
          st.append(it);
          st.push_back(' ');
      }
      st.pop_back();
      ans.push_back(st);
      return;
  }
for(int i=ind;i<str.size();i++){

    if(mp[str.substr(ind,i-ind+1)]){
        string st=str.substr(ind,i-ind+1);
        dummy.push_back(st);
        findWays(i+1,ans,dummy,str,mp);
        dummy.pop_back();
    }
}

}
vector<string> wordBreak(string &str, vector<string> &dictionary)
{
   vector<string>ans;
   unordered_map<string,int>mp;
   for(auto it:dictionary){
       mp[it]++;
   }
   vector<string>dummy;

   findWays(0,ans,dummy,str,mp);
   return ans;

}