#include <bits/stdc++.h> 
using namespace std;
int val(char a){
    if(a=='I')return 1;
    if(a=='V')return 5;
    if(a=='X')return 10;
    if(a=='L')return 50;
    if(a=='C')return 100;
    if(a=='D')return 500;
    if(a=='M')return 1000;
}
int romanToInt(string s) {
   int sum=0;
   for(int i=0;i<s.length();i++){
       sum+=val(s[i]);
       if(i>0&&s[i]=='V'&&s[i-1]=='I')sum-=2;
       if(i>0&&s[i]=='X'&&s[i-1]=='I')sum-=2;

       if(i>0&&s[i]=='L'&&s[i-1]=='X')sum-=2*10;
       if(i>0&&s[i]=='C'&&s[i-1]=='X')sum-=2*10;

       if(i>0&&s[i]=='D'&&s[i-1]=='C')sum-=2*100;
       if(i>0&&s[i]=='M'&&s[i-1]=='C')sum-=2*100;
   }
   return sum;
}
