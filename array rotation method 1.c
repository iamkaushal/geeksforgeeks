#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i =0; i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int d;
    scanf("%d", &d);

    d= d%n;

    int temp[d];

    for(int i=0; i<d; i++)
    {
        temp[i] = arr[i];
    }



    for(int i=0; i<n-d;i++)
    {
        arr[i] = arr[i+d];
    }


    for(int k=n-d , i=0; i<d; i++)
    {
        arr[k] = temp[i];
        k++;

    }


    for(int i =0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;

}
