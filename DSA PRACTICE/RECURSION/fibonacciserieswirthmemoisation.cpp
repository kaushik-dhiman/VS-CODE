#include<bits/stdc++.h >
using namespace std;

int F[10];

int fibwithmemo(int n)
{
	if(n<=1)
	{
		F[n]=n;
		return n;
	}
	else
	{
		if(F[n-2]==-1)
		{
			F[n-2]==fibwithmemo(n-2);
		}
		if(F[n-1]==-1)
		{
			F[n-1]=fibwithmemo(n-1);
		}
		F[n]=F[n-2]+F[n-1];
		return F[n-2]+F[n-1];
	}

}


int main()
{
	for(int i=0;i<10;i++){F[i]=-1;}
	int n;
	cin>>n;
	cout<<fibwithmemo(n);
	return 0;
}