#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> printPascal(int numRows) {
 vector<vector<long long int>>ans;
        
        ans.push_back({1});
        for(long long int i=1;i<numRows;i++){
            vector<long long int>temp;
            for(long long int k=0;k<=i;k++){
                long long int x=0;long long int y=0;
               if(k==0){
                   y=ans[i-1][k];
               }
               else if(k==i){
                x=ans[i-1][k-1];
               }
                else {
                   x=ans[i-1][k-1];
                   y=ans[i-1][k];
                    
                }
                temp.push_back(x+y);
            }
            ans.push_back(temp);
        }
        return ans;
    }
