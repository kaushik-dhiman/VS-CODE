#include<iostream>
using namespace std;

//tree recursion
void fun1(int n){
	if(n>0)
	{
		cout<<n<<" : ";
		fun1(n-1);
		fun1(n-1);
	}
}
int main()
{
	int n;
	cin>>n;
	fun1(n);
	return 0;
}
