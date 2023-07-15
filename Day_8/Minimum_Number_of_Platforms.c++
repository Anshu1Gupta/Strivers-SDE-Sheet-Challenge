#include<bits/stdc++.h>
using namespace std;
int calculateMinPatforms(int at[], int dt[], int n) {
    int maxi=1;
    sort(at,at+n);
    sort(dt,dt+n);
    int a=0,d=0;
    int count=0;
    while(a<n){
        if(at[a]<=dt[d]){
        count++;
        maxi=max(count,maxi);
        a++;
        }
        else{
            count--;
            d++;
        }
    }
    return maxi;

}