#include <bits/stdc++.h>
using namespace std;
void rotateMatrix(vector<vector<int>> &mat, int m, int n)
{
    int row=0,col=0;
    //m is the ending row index
    //n is the ending column index
    
    while(row<m&&col<n){
        if(row+1==m||col+1==n)break;
       int prev=mat[row+1][col];
        for(int i=col;i<n;i++){
            swap(prev,mat[row][i]);
        }
        row++;
        
        for(int i=row;i<m;i++){
            swap(prev,mat[i][n-1]);
        }
        n--;
        
        if(row<m){
            for(int i=n-1;i>=col;i--){
                swap(prev,mat[m-1][i]);
            }
            m--;
        }
        
        if(col<n){
            for(int i=m-1;i>=row;i--){
                swap(prev,mat[i][col]);
            }
            col++;
        }
    }

}