#include <bits/stdc++.h>
using namespace std;
int modularExponentiation(int k, int y, int p) {
	
	int res=1;
	long long x=(long long)k;
	if(x==0)return 0;
	
	while (y > 0)
	{
		if (y & 1)
		 res = (res*x) % p;
		 
		y = y>>1;
		x = (x*x) % p;
	}
	return res;
}