#include <bits/stdc++.h> 
using namespace std;
int compareVersions(string a, string b) 
{
    
    int i=0;
    int j=0;
    int n=a.length();
    int m=b.length();
    while(i<n||j<m){
        while(i<n&&a[i]=='0')i++;
        while(j<m&&b[j]=='0')j++;

        long long num1=0,num2=0;
        while(i<n&&a[i]!='.'){
            num1=(num1*10)+(a[i++]-'0');
        }
        while(j<m&&b[j]!='.'){
            num2=(num2*10)+(b[j++]-'0');
        }

        if(num1>num2)return 1;
        if(num2>num1)return -1;

        i++,j++;
    }
    return 0;
}