#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
	if(n<=1)return 1;
	else return fact(n-1)*n;
}

int combination(int n, int r)
{
	int t1,t2,t3;
	t1=fact(n);
	t2=fact(r);
	t3=fact(n-r);
	return t1/(t2*t3);
}

int combinationrecursive(int n, int r)
{
	if(r==0 || n==r)return 1;
	else
		return combinationrecursive(n-1,r-1)+combinationrecursive(n-1,r);
}

int main()
{
	int n,r;
	cin>>n>>r;
	cout<<combination(n,r)<<" "<<combinationrecursive(n,r);
	return 0;
}