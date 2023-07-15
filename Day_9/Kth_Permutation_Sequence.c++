#include<bits/stdc++.h>
using namespace std;
string kthPermutation(int n, int k) {
    int fact=1;
    vector<int>perm;
    for(int i=1;i<=n-1;i++){
     fact=fact*i;
     perm.push_back(i);
    }
    perm.push_back(n);
    k--;
    string ans;
    while(true){
      ans+=to_string(perm[k/fact]);
      perm.erase(perm.begin()+k/fact);
      if(perm.size()==0)break;
      k=k%fact;
      int m=perm.size();
      fact=fact/m; 
    }
return ans;
}
