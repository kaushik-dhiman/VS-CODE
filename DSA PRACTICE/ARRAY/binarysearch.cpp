#include<bits/stdc++.h>
using namespace std;
int binarysearch(int l,int h,int arr[],int key)
{
	while(l<=h)
	{
		int mid=(l+h)/2;
		if(arr[mid]==key)return mid;
		else if(arr[mid]>key)h=mid-1;
		else
			l=mid+1;
	}
	return -1;

}
int binarysearchrec(int l,int h,int arr[],int key)
{
	if(l<=h)
	{
		int mid=(l+h)/2;
		if(arr[mid]==key)
			return mid;
		else if(arr[mid]>key)return binarysearchrec(l,mid-1,arr,key);
		else return binarysearchrec(mid+1,h,arr,key);
	}
	return -1;
}
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int key;
	cin>>key; 
	cout<<binarysearch(0,9,arr,key)<<" "<<binarysearchrec(0,9,arr,key);

	return 0;
}