#include <bits/stdc++.h> 
using namespace std;
int uniquePaths(int m, int n) {
	int dp[m][n];
	dp[0][0]=1;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			
		if(i==0&&j==0){
			dp[i][j]=1;
		}
		else{
				int cost1=0,cost2=0;
			if(i>0)
                cost1=dp[i-1][j];
			
			if(j>0)
				cost2=dp[i][j-1];
			
			dp[i][j]=(cost1+cost2);
		}
		}
	}
	return dp[m-1][n-1];
}