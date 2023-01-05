//	http://laptrinhonline.club/problem/tichpxbitonic

#include <bits/stdc++.h>
#define ll long long
#define sontrau main()

using namespace std;


int sontrau{
	ll n;

	cin >>n;
	int a[n];
	for (int i=0; i<n; i++)
		cin >>a[i];

	int dq1[n]={};
	dq1[0]=1;
	for (int i=1; i<n; i++) {
		if (a[i-1]<=a[i]) {
			dq1[i]=dq1[i-1]==0? 2:dq1[i-1]+1;
		} else dq1[i]=1;
	}

	int dq2[n]={};
	dq2[n-1]=1;
	for (int i=n-2; i>0; i--) {
		if (a[i+1]<=a[i]) {
			dq2[i]=dq2[i+1]==0? 2:dq2[i+1]+1;
		} else dq2[i]=1;
	}
/*
	for (int i=0; i<n; i++)
		cout <<dq1[i] << " ";
	cout <<endl;
	for (int i=0; i<n; i++)
		cout <<dq2[i] << " ";
*/
	int res=0;
	for (int i=0; i<n-1; i++){
		res=max(res,dq1[i]+dq2[i+1]);
	}
	cout <<res;

	return 0;
}	