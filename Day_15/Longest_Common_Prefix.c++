#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
    if(a.length()<b.length())return true;
    return false;
}
string longestCommonPrefix(vector<string> &arr, int n)
{
    sort(arr.begin(),arr.end(),cmp);
    string str=arr[0];
    int len=str.length();
    for(auto it:arr){
        if(str==it.substr(0,len)){
            continue;
        }
        else{
            string temp=str;
            str="";
            for(int i=0;i<temp.length();i++){
              if(temp[i]==it[i]){
                 str+=temp[i];
              }
              else break;
            }
        }
    }
    return str;
}


