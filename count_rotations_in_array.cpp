#include<bits/stdc++.h>
using namespace std;

int countRotation(int arr[], int low, int high);

int main()
{

#ifndef LOCAL_TEST
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n ;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << "Rotations : " << countRotation(arr, 0, n - 1);

	return 0;
}

int countRotation(int arr[], int low, int high)
{
	if (high < low) return -1;
	if (high == low) return low; // only one element is in the array

	int mid = (low + high) / 2;

	if (arr[mid + 1] < arr[mid])
		return mid + 1;

	if (arr[mid] < arr[mid - 1])
		return mid;

	if (arr[high] > arr[mid])
		return countRotation(arr, low, mid - 1);
	else return countRotation(arr, mid + 1, high);

}