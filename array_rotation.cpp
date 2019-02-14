// array rotation using temp array

#include<bits/stdc++.h>
using namespace std;

void leftArrayRotate(int arr[], int n, int d);

int main()
{

#ifndef LOCAL_TEST
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n ;
	cin >> n;

	int d; 
	cin >> d;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	leftArrayRotate(arr, n, d);

	return 0;
}

void leftArrayRotate(int arr[], int n , int d)
{
	int temp[d];
	for (int i = 0; i < d; i++)
		temp[i] = arr[i];

	for (int i = 0; i < n - d ; i++)
		arr[i] = arr[i + d];

	for (int i = n - d, j = 0; i < n; i++, j++)
		arr[i] = temp[j];

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	cout << endl;
}