//	http://laptrinhonline.club/problem/hhb22

#include <bits/stdc++.h>
#define ll long long
#define sontrau main()

using namespace std;

bool cf_snt(ll n){
    if (n==2) return true;
    if ((n<2) || (n%2==0)) return false;
    for (int i=3; i*i<=n; i+=2)
        if (n%i==0)
            return false;
    
    return true;
}

sontrau{
	ll n;
	cin >>n;
	ll a[n];
	for (int i=0; i<n; i++){
		cin >>a[i];
	}

	for (int i=0; i<n; i++){
		if (cf_snt(a[i])==true)
			cout <<a[i] <<" ";
	}

	return 0;
}