#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
	int *A;
	int size;
	int length;

	void display(int A[])
	{
		cout << "\nElements are : ";
		for (int i = 0; i < length; i++)
			cout << A[i] << " ";
	}
};

int main()
{
	Array a;
	cout << "Enter Size : ";
	cin >> a.size;
	a.A = new int[a.size];
	a.length = 0;
	int n;
	cout << "Enter the No of Elements to insert : ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a.A[i];
	a.length = n;
	a.display(a.A);
	return 0;
}
