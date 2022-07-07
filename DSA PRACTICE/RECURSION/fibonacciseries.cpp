#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
	if(n<=1){return n;}
	else return fibonacci(n-2)+fibonacci(n-1);
}

int fibonacciusingloop(int n)
{
	if(n<=1){return n;}
	int t0=0,t1=1,s;
	for(int i=2;i<=n;i++)
	{
		s=t0+t1;
		t0=t1;
		t1=s;
	}
	return s;
}

int main()
{
	int n;
	cin>>n;
	cout<<fibonacci(n)<<"   "<<fibonacciusingloop(n);
	return 0;
}