// array rotation using reversal algortihm

#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[], int start, int end);
void reversal_algorithm(int arr[], int size, int d);

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
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	reversal_algorithm(arr, n, d );

	return 0;
}

void reversearray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void reversal_algorithm(int arr[], int size, int d)
{
	reversearray(arr, 0, d - 1);
	reversearray(arr, d, size - 1);
	reversearray(arr, 0, size - 1);

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
