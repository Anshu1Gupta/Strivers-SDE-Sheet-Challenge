#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int>& a, pair<int, int>& b){

    return a.second < b.second;

}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    vector<pair<int,int>>ans;
    int n=start.size();
    for(int i=0;i<n;i++){
        ans.push_back({start[i],finish[i]});
    }
    sort(ans.begin(),ans.end(),cmp);
    int sum=0;
    int e=-1;
    for(auto v:ans){
        if(v.first>=e){
            sum++;
            e=v.second;
        }
    }
    return sum;
}