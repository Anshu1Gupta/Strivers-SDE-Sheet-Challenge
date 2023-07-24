#include <bits/stdc++.h> 
using namespace std;
vector<int> maxMinWindow(vector<int> arr, int n) {
    // Write your code here.
    vector<int>left(n,-1),right(n,n);

    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            left[i]=st.top();
        }
        st.push(i);
    }
    
    while(!st.empty())st.pop();
    
     for(int i=n-1;i>=0;i--){
        while(!st.empty()&&arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            right[i]=st.top();
        }

        st.push(i);
    }

    vector<int>ans(n,-1e9);
    for(int i=0;i<n;i++){
        int r=right[i]-left[i]-2;
        ans[r]=max(ans[r],arr[i]);
    }

    for(int i=n-2;i>=0;i--){
        ans[i]=max(ans[i],ans[i+1]);
    }
    return ans;
}