#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
	if(n>0)
		return sum(n-1)+n;
}

int sum1(int n)
{
	if(n==0)return 0;
	else	return sum(n-1)+n;
}

int main()
{
	int n;
	cin>>n;
	cout<<sum(n)<<" : "<<sum1(n);
	return 0;
}