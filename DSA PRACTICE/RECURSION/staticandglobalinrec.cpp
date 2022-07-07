#include<iostream>
using namespace std;

//use of static in recursion

int fun1(int n){
	static int s=0;
	if(n>0)
	{
		s++;
		return fun1(n-1)+ s;
	}
	return 0;
}
//use of global in recursion
int g=0;
int fun2(int n){
	if(n>0)
	{
		g++;
		return fun2(n-1)+g;
	}
	return 0;
}

int main()
{
	int n;
	cin>>n;
	cout<<fun1(n);
	cout<<"\n\n";
	cout<<fun2(n);
	return 0;
}
