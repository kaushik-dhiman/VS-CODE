#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[10]={1,-2,3,-4,5,6,-7,8,-1,10};
	int i=0,j=9;
	while(i<j)
	{
		while(arr[i]<0){i++;}
		while(arr[j]>=0){j--;}
		if(i<j){
			swap(arr[i],arr[j]);
		}
	}
/*
	while(i<j)
	{
		if(arr[i]>0)
		{
			if(arr[j]<0){
				swap(arr[i],arr[j]);
				i++;
				j--;
			}else
			{
				j--;
			}
		}else
		{
			i++;
		}
	}
	*/
	for(i=0;i<10;i++)
		cout<<arr[i]<<" ";
	return 0;
}