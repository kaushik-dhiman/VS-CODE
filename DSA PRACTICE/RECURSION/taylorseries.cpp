#include<bits/stdc++.h>
using namespace std;

// e^x=1+(x/1)+(x^2/2!)+(x^3/3!)+........

double taylorseries(int x,int n)
{
	static double pow=1,fact=1;
	double res;
	if(n==0)
		return  1;
	else
	{
		res = taylorseries(x,n-1);
		pow*=x;
		fact*=n;
		return res+ (pow/fact);	
	}
}

int main()
{
	int x,n;
	cin>>x>>n;
	cout<<taylorseries(x,n);
	return 0;
}