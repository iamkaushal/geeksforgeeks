#include<bits/stdc++.h>
using namespace std;

int searchInRotatedArray(int arr[], int key, int low, int high);

int main()
{

#ifndef LOCAL_TEST
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int key;
	cin >> key;

	cout << "Element found at index : " << searchInRotatedArray(arr, key, 0, n-1);

	return 0;
}

int searchInRotatedArray(int arr[], int key, int low, int high)
{
	if (low > high) return -1 ;

	int mid = (low + high) / 2;

	if (arr[mid] == key)
		return mid;

	if (arr[low] <= arr[mid])
	{
		if (key >= arr[low] && key <= arr[mid])
			return searchInRotatedArray(arr, key, low, mid - 1);
		else return searchInRotatedArray(arr, key, mid + 1, high);
	}

	if (key >= arr[mid] && key <= arr[high])
		return searchInRotatedArray(arr, key, mid + 1, high);
	else return searchInRotatedArray(arr, key, low, mid - 1);
}