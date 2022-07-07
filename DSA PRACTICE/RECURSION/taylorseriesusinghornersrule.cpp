#include<bits/stdc++.h>
using namespace std;

// e^x=1+(x/1)+(x^2/2!)+(x^3/3!)+........

double taylorseriesusinghornersrule_loop(int x,int n)
{
	//double res=1;
	double s=1;
	int i;
	double num=1,den=1;
	//for(;n>0;n--)
	//	res=1+x*res/n;
	for(int i=1;i<=n;i++)
	{
		num*=x;
		den*=i;
		s+=num/den;
	}
	//return res;
	return s;

}

double taylorseriesusinghornersrule(int x,int n)
{
	static double res=1;
	if(n==0)return res;
	else
	{
		res=1+x*res/n;
		return taylorseriesusinghornersrule(x,n-1);
	}
}

int main()
{
	int x,n;
	cin>>x>>n;
	cout<<taylorseriesusinghornersrule(x,n)<<"    "<<taylorseriesusinghornersrule_loop(x,n);;
	return 0;
}