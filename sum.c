#include <stdio.h>
int sum(int arr[],int n)
{
    int i,total=0;
    for(int i=0;i<n;i++)
    {
        total=total+arr[i];
    }
    return total;
}
int main()
{
    int arr[5],i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("sum=%d",sum(arr,n));
    return 0;
}



output:-

Enter the number of elements:5
Enter 5 elements:45
58
67
34
23
sum=227
