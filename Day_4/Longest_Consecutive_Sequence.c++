#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int>set;
    for(int i=0;i<n;i++){
        set.insert(arr[i]);
    }
    int maxLen=0;
    for(int num:arr){
        if(set.find(num-1)==set.end()){
            int currNum=num;
            int len=1;
            while(set.find(currNum+1)!=set.end()){
                currNum++;
                len++;
            }
            maxLen=max(maxLen,len);
        }
    }
    return maxLen;
}