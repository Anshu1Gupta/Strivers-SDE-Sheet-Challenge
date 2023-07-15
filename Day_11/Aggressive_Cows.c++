bool isPossible(int maxDiff,vector<int>&stalls,int t_cows){
    // int c_cows=0;
    int k=stalls[0];
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-k>=maxDiff){
            t_cows--;
            if(t_cows==1)return true;
            k=stalls[i];
        }

    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    int ans=-1;
    sort(stalls.begin(),stalls.end());
    int low=1;
    int high=stalls[stalls.size()-1]-stalls[0];

    while(low<=high){
        int mid=(low+high)/2;
        if(isPossible(mid,stalls,k)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;


}