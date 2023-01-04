//	http://laptrinhonline.club/problem/tichpxbieuthuccan

#include <bits/stdc++.h>
#define ll long long

using namespace std;

main() {
	ll n;
	cin >>n;
	ll a[n];
	for (int i=0; i<n; i++){
		cin >>a[i];
	}

	double res1=a[0];
	double res2=a[n-1];
	for (int i=1; i<n; i++){
		if (a[i]<0){
			cout <<"Khong tinh duoc S1" <<endl;
			cout <<"Khong tinh duoc S2";
			return 0;
		} else {
			res1=sqrt(res1+a[i]);
			res2=sqrt(res2+a[n-1-i]);
		}
	}
	if (res1>0)
		cout <<fixed <<setprecision(3) <<sqrt(res1) <<endl <<sqrt(res2);

	return 0;
}
