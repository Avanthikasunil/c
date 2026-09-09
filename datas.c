 #include <stdio.h>
  2 int main()
  3 {
  4     int n, fact = 1;
  5     printf("enter the number:");
  6     scanf("%d",&n);
  7     for (int i=1; i<=n; i++)
  8     {
  9     fact = fact * i;
 10     }
 11     printf("factorial = %d",fact);
 12     return 0;
 13 }
