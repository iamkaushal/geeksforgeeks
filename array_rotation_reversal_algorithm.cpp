// array rotation using reversal algortihm

#include<bits/stdc++.h>
using namespace std;

void reversal_algorithm(int arr[], int size, int d);
void reverse(int arr[], int start, int end);

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

void reversal_algorithm(int arr[], int size, int d)
{
	reverse(arr, 0, d);
	reverse(arr, d, size);
	reverse(arr, 0, size);

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void reverse(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end - 1];
		arr[end - 1] = temp;
	}
	start++;
	end--;
}