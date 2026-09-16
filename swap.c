#include<stdio.h>
  2 void swap(int *a, int *b)
  3 {
  4     int temp;
  5
  6     temp = *a;
  7     *a = *b;
  8     *b = temp;
  9 }
 10 int main()
 11 {
 12     int a,b;
 13
 14     printf("enter the first number:");
 15     scanf("%d", &a);
 16
 17     printf("enter the second number:");
 18     scanf("%d", &b);
 19
 20     printf("\nbefore swapping:\n");
 21     printf("a = %d\n", a);
 22     printf("b = %d\n", b);
 23
 24     swap (&a, &b);
 25     printf("\nafter swapping:\n");
 26     printf("a = %d\n",a);
 27     printf("b = %d\n",b);
 28
 29     return 0;
 30 }



output:-
enter the first number:10
enter the second number:20

before swapping:
a = 10
b = 20

after swapping:
a = 20
b = 10
