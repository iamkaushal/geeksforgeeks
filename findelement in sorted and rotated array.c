#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int find;
    scanf("%d",&find);

    int res = findelementRotatedAndSortedArray(arr, n, find);

    printf("%d", res);
    printf("%d", res);
    return 0;

}

int findelementRotatedAndSortedArray(int arr[] , int n, int find)
{
    int i;
    for( i=0; i<n; i++)
    {
        if(arr[i]>arr[i+1])
        {
            break;
        }
    }

    int r = i;
    int l= (i+1)%n;

    while(l!=r)
    {

        if((arr[l]+arr[r]) ==  find) return 1;

        else if((arr[l] + arr[r]) < find)
        {
            l = (l+1)%n;
        }

        else if((arr[l] + arr[r]) > find)
        {
            r = (r+n-1)%n;
        }
    }

    return 0;
}
