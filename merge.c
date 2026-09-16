#include<stdio.h>
  2 int main()
  3 {
  4   int a[5],b[5],c[10];
  5   int i,j,k,temp;
  6
  7   printf("enter 5 elements of first sorted array:\n");
  8   for(i=0;i<5;i++)
  9     scanf("%d",&a[i]);
 10
 11   printf("enter 5 elements of second sorted array:\n");
 12   for(j=0;j<5;j++)
 13     scanf("%d" ,&b[j]);
 14   for(i=0;i<4;i++)
 15       for(j=i+1;j<5;j++)
 16           if(a[i]>a[j])
 17     {
 18         temp = a[i];
 19         a[i] = a[j];
 20         a[j] = temp;
 21     }
 22   for (i=0;i<4;i++)
 23       for(j=i+1;j<5;j++)
 24           if(b[i]>b[j])
 25     {
 26         temp = b[i];
 27         b[i] = b[j];
 28         b[j]= temp;
 29     }
 30     for (i=0;i<4;i++)
 31         for(j=j+1;j<5;j++)
 32             if(c[i]>c[j])
 33     {
 34         temp = c[i];
 35         c[i] = c[j];
 36         c[j] = temp;
 37     }
 38   i=0;
 39   j=0;
 40   k=0;
 41
 42   while(i<5 && j<5)
 43     {
 44         if(a[i]<=b[j])
 45         {
 46             c[k]=a[i];
 47             i++;
 48         }
 49         else
 50         {
 51             c[k]=b[j];
 52             j++;
 53          }
 54         k++;
 55     }
 56   while(i<5)
 57   {
 58       c[k]=a[i];
 59       k++;
 60       i++;
 61   }
 62   while(j<5)
 63   {
 64       c[k]=b[j];
 65       k++;
 66       j++;
 67   }
 68      printf("merged array:\n");
 69     for(i=0;i<10;i++)
 70     printf("%d  ",c[i]);
 71     return 0;
 72 }





output:-

enter 5 elements of first sorted array:
32
45
67
1
8
enter 5 elements of second sorted array:
0
34
67
299
100
merged array:
0  1  8  32  34  45  67  67  100  299 




