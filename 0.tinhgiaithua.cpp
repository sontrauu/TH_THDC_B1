// /http://laptrinhonline.club/problem/factorial

#include <bits/stdc++.h>
#define ll long long
#define sontrau main()

using namespace std;

sontrau {
	ll n;
	cin >>n;

	ll res=1;
	for (int i=2; i<=n; i++)
		res*=i;
	cout <<res;

	return 0;
}
