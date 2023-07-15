#include <bits/stdc++.h> 
using namespace std;
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/


vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>>ans;
    sort(intervals.begin(),intervals.end());
    int n=intervals.size();
    ans.push_back({intervals[0][0],intervals[0][1]});
    for(int i=1;i<n;i++){
       int x=ans.size();
       if(ans[x-1][1]<intervals[i][0]){
           ans.push_back({intervals[i][0],intervals[i][1]});
       }
       else if(ans[x-1][1]>=intervals[i][0]){
           ans[x-1][1]=max(ans[x-1][1],intervals[i][1]);
       }
    }
    return ans;
}
