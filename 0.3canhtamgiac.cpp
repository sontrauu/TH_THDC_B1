//	http://laptrinhonline.club/problem/istriangle

#include <bits/stdc++.h>
#define ll long long
using namespace std;

double dientich(double a, double b, double c){
	double p=a+b+c;
	p/=2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

bool chk(double x, double y, double z){
	if (x+y > z)
		return true; else
		return false;
}

main() {
	double a,b,c;
	cin >>a >>b >>c;
	if (chk(a,b,c) && chk(a,c,b) && chk(b,c,a)){
		cout <<fixed <<setprecision(2) <<a+b+c <<endl;
		cout <<fixed <<setprecision(2) <<dientich(a,b,c);
	} else{
		cout <<"khong la tam giac";
	}
}