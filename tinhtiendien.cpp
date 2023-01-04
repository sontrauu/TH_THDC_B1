// http://laptrinhonline.club/problem/tichpxtiendien

#include <bits/stdc++.h>
#define ll long long

using namespace std;

main() {
	ll n;
	cin >>n;

	double res=0;

	if (n==0){
		cout <<0;
		return 0;
	}

	if (n>0){
		if (n>100)
			res+=100*1.0; else
			res+=n*1.0;
		n-=100;
	}
	if (n>0){
		if (n>150)
			res+=150*1.2; else
			res+=n*1.2;
		n-=150;
	}
	if (n>0){
		if (n>250)
			res+=250*1.7; else
			res+=n*1.7;
		n-=250;
	}
	if (n>0){
		res+=n*2.2;
	}
	cout <<fixed <<setprecision(3) <<res;

	return 0;
}
