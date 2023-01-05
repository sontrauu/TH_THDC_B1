//	http://laptrinhonline.club/problem/i3701

#include <bits/stdc++.h>
#define ll long long
#define sontrau main()

using namespace std;

sontrau {
	ll n;
	cin >>n;

	for (ll i=2; i<=n; i+=2){
		printf("%lld ^ 2 = %lld\n",i,(ll)pow(i,2));
	}

	return 0;
}
