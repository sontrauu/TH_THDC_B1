// /http://laptrinhonline.club/problem/factorial

#include <bits/stdc++.h>
#define ll long long

using namespace std;

main() {
	ll n;
	cin >>n;

	ll res=1;
	for (int i=2; i<=n; i++)
		res*=i;
	cout <<res;

	return 0;
}
