#include<bits/stdc++.h>
using namespace std;

string isPallindrome(string str,int low,int high){
    int n=str.length();

    while(low>=0&&high<n){
        if(str[low]==str[high]){
            low--,high++;
        }
        else break;
    }
    low++,high--;
    return str.substr(low,high-low+1);
}
string longestPalinSubstring(string str)
{
    int n=str.length();
    string ans;
    int maxi=0;
    
    for(int i=0;i<n-1;i++){

        string st=isPallindrome(str,i,i);
        if(st.length()>maxi){
            maxi=st.length();
            ans=st;
        }
        st=isPallindrome(str,i,i+1);
        if(st.length()>maxi){
            maxi=st.length();
            ans=st;
        }
    }
    return ans;
}