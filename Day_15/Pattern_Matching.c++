#include<bits/stdc++.h>
using namespace sdt;
vector<int> stringMatch(string text, string pattern) {
	
vector<int>ans;
int n=text.size();
int len=pattern.length();
	for(int i=0;i<n;i++){
		if(pattern==text.substr(i,len)){
			ans.push_back(i+1);
		}
	}
	return ans;
}
