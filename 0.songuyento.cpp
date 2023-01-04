//	http://laptrinhonline.club/problem/mah1

#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cf_snt(ll n){
    if (n==2) return true;
    if ((n<2) || (n%2==0)) return false;
    for (int i=3; i*i<=n; i+=2)
        if (n%i==0)
            return false;
    
    return true;
}

main(){
	ll n;
	cin >>n;

	if (cf_snt(n)==true)
		cout <<"YES"; else
		cout <<"NO";

	return 0;
}