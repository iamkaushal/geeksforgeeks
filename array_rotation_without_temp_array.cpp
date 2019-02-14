// array rotation without using temp array

#include<bits/stdc++.h>
using namespace std;

void RotateByOne(int arr[], int size);

int main()
{
#ifndef LOCAL_TEST
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int d;
	cin >> d;

	int arr[n];
	for (int i = 0; i < n; i ++)
		cin >> arr[i];

	for (int i = 0; i < d; i++)
		RotateByOne(arr, n);

	for (int i = 0; i < n; i++)
		cout << arr[i]<< " ";
	cout << endl;

	return 0;
}

void RotateByOne(int arr[], int size)
{
	int temp = arr[0];
	for (int i = 0; i < size - 1; i++)
		arr[i] = arr[i + 1];
	arr[size - 1] = temp;
}