#include <bits/stdc++.h> 
using namespace std;
struct meeting {
    int st;
    int en;
    int po;
};
bool static cmp(struct meeting m1,struct meeting m2){
    if(m1.en<m2.en)return true;
    if(m1.en>m2.en)return false;
    if(m1.po<m2.po)return true;
    return false;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) 
{   int n=start.size();
    struct meeting meet[n];
           for(int i=0;i<start.size();i++){
             meet[i].st=start[i];
             meet[i].en=end[i];
             meet[i].po=i+1;
           }
           sort(meet,meet+n,cmp);
           vector<int>ans;
           int last=meet[0].en;
           ans.push_back(meet[0].po);
           for(int i=1;i<n;i++){
               if(meet[i].st>last){
                   last=meet[i].en;
                   ans.push_back(meet[i].po);
               }
           }
           return ans;

}