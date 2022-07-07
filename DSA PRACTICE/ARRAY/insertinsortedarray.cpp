#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10]={1,2,3,4,8,10,12,-1,-1,-1};
	int n,i=8;
	cin>>n;
	while(arr[i]>n  || arr[i]==-1)
	{
		arr[i+1]=arr[i];
		i--;
	}
	arr[i+1]=n;
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	return 0;
}