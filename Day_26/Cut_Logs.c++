#include<bits/stdc++.h>
using namespace std;

int dp[104][10004];

int cutLogs(int k, int n) {
    vector<int> prev(n + 1, 0), curr(n + 1, 0);
    prev[1] = 1;

    for(int f = 1; f <= n; f++)
        prev[f] = curr[f] = f;

    for(int e = 2; e <= k; e++) {
        for(int f = 2; f <= n; f++) {
            int low = 1, high = f, ans = INT_MAX;
            while(low <= high) {
                int mid = (low + high) >> 1;
                int down = prev[mid - 1];
                int up = curr[f - mid];

                ans = min(ans, 1 + max(down, up));
                if(up > down)
                    low = mid + 1;
                else 
                    high = mid - 1;
            }

            curr[f] = ans;
        }
        prev = curr;
    }
    
    return prev[n];
}