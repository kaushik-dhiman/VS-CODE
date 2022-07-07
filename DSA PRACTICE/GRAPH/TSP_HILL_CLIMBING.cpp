#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int CalcDistance(int[], const int);
void swapValues(int[], int, int);
void Swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
int main()
{
	int iOldCost = 0;
	int iNewCost = 0;
	int iSwaps = 0;

	const int PLACES = 9;
	int cities[PLACES];
	string citiesNames[PLACES ];
	int citiesID[PLACES];

	citiesNames[0] = "New York		";
	citiesNames[1] = "Paris			";
	citiesNames[2] = "New Delhi		";
	citiesNames[3] = "Rio de janeiro		";
	citiesNames[4] = "New Orleans		";
	citiesNames[5] = "Barcelona		";
	citiesNames[6] = "Manchester		";
	citiesNames[7] = "London	    		";
	citiesNames[8] = "Dubai			";

	// Cities				Clone
	cities[0] = 14220;	citiesID[0] = 14220;
	cities[1] = 18534;	citiesID[1] = 18534;
	cities[2] = 12481;	citiesID[2] = 12481;
	cities[3] = 12264;  citiesID[3] = 12264;
	cities[4] = 12358;	citiesID[4] = 12358;
	cities[5] = 19189;	citiesID[5] = 19189;
	cities[6] = 18140;  citiesID[6] = 18140;
	cities[7] = 18327;  citiesID[7] = 18327;
	cities[8] = 14193;  citiesID[8] = 14193;

	// Concatenate city names with their distances 
	for (int i = 0; i < PLACES ; ++i)
	{
		citiesNames[i] = citiesNames[i] + std::to_string(citiesID[i]);
	}

	// Display the cities and their distances
	cout << "List of cities we want to visit and their distances: \n";
	for (int i = 0; i < PLACES ; ++i)
	{
		cout << citiesNames[i] << "km." << endl;
	}

	iOldCost = CalcDistance(cities, PLACES );

	while (iOldCost > 0)
	{
		for (int i = 0; i < PLACES - 1; ++i)
		{
			Swap(cities, i, i + 1);
			iNewCost = CalcDistance(cities, PLACES );

			if (iOldCost > iNewCost)
			{
				for (int i = 0; i < PLACES ; ++i)
				{
					cout << cities[i] << endl;
					iOldCost = iNewCost;
				}
			}
			else
			{
				Swap(cities, i, i + 1);
			}
		}
	}

	for (int i = 0; i < PLACES ; ++i)
	{
		for (int j = 0; j < PLACES ; ++j)
		{
			if (cities[i] == citiesID[j])
			{
				cout << citiesNames[j] << endl;
			}
		}
	}

	int tmp;
	cin >> tmp;
	return 0;
}

int CalcDistance(int distanceArray[], const int MAX)
{
	int c = 0;

	for (int i = 0; i < MAX; ++i)
	{
		for (int j = i + 1; j < MAX; ++j)
		{
			if (distanceArray[j] < distanceArray[i])
			{
				c++;
			}
		}
	}
	return c;
}

