#include<stdio.h>
  2 int largest(int a[],int n)
  3 {
  4     int large =a[0];
  5     for (int i =0; i< n; i++)
  6     {
  7         if (a[i] > large)
  8         {
  9              large = a[i];
 10         }
 11     }
 12     return large;
 13 }
 14 int main()
 15 {
 16     int a[5],i,result;
 17     printf("enter the element:\n" );
 18         for(i=0;i<5;i++)
 19     {
 20         scanf("%d",&a[i]);
 21     }
 22     result = largest(a,5);
 23     printf("largest element=%d",result);
 24 }
