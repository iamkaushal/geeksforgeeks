#include<stdio.h>
#include<stdlib.h>

void leftrotate(int arr[], int n , int d)
{
    int temp = arr[0];
    for(int i=0; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    arr[n-1]=temp;
}

int main()
{
    int n ;
    scanf("%d",&n);

    int arr[n];
    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int d;
    scanf("%d", &d);

    while(d--)
    {
        leftrotate(arr, n , d);
    }

    for(int i=0; i<n ; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
