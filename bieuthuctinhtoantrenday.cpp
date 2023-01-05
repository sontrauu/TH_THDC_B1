//	http://laptrinhonline.club/problem/tichpxtongtrenday

#include <bits/stdc++.h>
#define ll long long
#define sontrau main()

using namespace std;

sontrau{
	ll n;
	cin >>n;
	ll a[n+1];

	for (int i=0; i<n; i++)
		cin >>a[i];
	a[n]=1;
	ll res1=0;
	ll res2=0;
	ll res3=0;
	for (int i=0; i<n; i++){
		res1+=a[i]*a[i];
		res2+=a[i]*a[n-1-i];
		res3+=a[i]*a[i+1];
	}
	res3-=a[n-1];
	cout <<res1 <<endl;
	cout <<res2 <<endl;
	cout <<res3;


	return 0;
}
