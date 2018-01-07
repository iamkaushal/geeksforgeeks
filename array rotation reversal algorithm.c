#include<stdio.h>
#include<stdlib.h>

void reverse(int arr[], int n, int start, int end)
{
    int temp;

    while(start<end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate(int arr[], int n , int d)
{
    reverse( arr,n, 0, d-1);
    reverse( arr, n, d, n-1);
    reverse( arr, n, 0, n-1);
}


int main()
{
    int n ;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int d;
    scanf("%d", &d);
    d= d%n;


    rotate(arr, n, d);

    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}
