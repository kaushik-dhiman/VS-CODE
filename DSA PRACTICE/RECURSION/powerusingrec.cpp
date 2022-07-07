#include <bits/stdc++.h>
using namespace std;

int powerr(int m,int n)
{
	if(n==1)return m;
	//if(n==0) return 1;
	else return powerr(m,n-1)*m;
}


/////////////////////////////WRONG ANS /////////////////////////
/*
int powerrfast(int m,int n){
	if(n==0) return 1;
	if(n%2==0) return powerrfast((m*n),(n/2));
	else return m*powerrfast((m*n),((n-1)/2));
}
*/
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<powerr(m,n);//<<" : "<<powerrfast(m,n)<<"\n";
	return 0;
}
