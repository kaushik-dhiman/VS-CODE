#include<bits/stdc++.h>
using namespace std;

void unionn(int arr1[],int arr2[],int n,int m)
{
	int i=0,j=0,k=0,res[n+m]={0};
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
			res[k++]=arr1[i++];
		else if(arr1[i]>arr2[j])
			res[k++]=arr2[j++];
		else
		{
			res[k++]=arr1[i++];
			j++;
		}
	}
	while(i<n)
		res[k++]=arr1[i++];
	while(j<m)
		res[k++]=arr2[j++];
	cout<<"\nUnion : ";
	for(i=0;i<n+m;i++)
	{	if(res[i]==0)continue;
		cout<<res[i]<<" ";
	}
} 
void intersection(int arr1[],int arr2[],int n,int m)
{
	int i=0,j=0,k=0,res[n+m]={0};
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
			i++;
		else if(arr1[i]>arr2[j])
			j++;
		else
		{
			res[k++]=arr1[i++];
			j++;
		}
	}
	cout<<"\nIntersection : ";
	for(i=0;i<n+m;i++)
	{	if(res[i]==0)continue;
		cout<<res[i]<<" ";
	}
}

void setdifference(int arr1[],int arr2[],int n,int m)
{
	int i=0,j=0,k=0,res[n+m]={0};
	while(i<n)
	{
		if(arr1[i]<arr2[j])
			res[k++]=arr1[i++];
		else if(arr1[i]>arr2[j])
			j++;
		else
		{
			i++;
			j++;
		}
	}
	cout<<"\nSet Difference : ";
	for(i=0;i<n+m;i++)
	{	if(res[i]==0)continue;
		cout<<res[i]<<" ";
	}
}


int main()
{
	int arr1[5]={3,4,5,6,10};
	int arr2[5]={2,4,5,7,12};
	unionn(arr1,arr2,5,5);
	intersection(arr1,arr2,5,5);
	setdifference(arr1,arr2,5,5);
	return 0;
}