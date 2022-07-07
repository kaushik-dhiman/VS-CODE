#include <bits/stdc++.h>100
using namespace std;

int fun(int n)
{
	if(n>100)
		return n-10;
	else
		return fun(fun(n+11));		
}

int main()
{
	int n;
	cin>>n;
	cout<<fun(n);
	return 0;
}