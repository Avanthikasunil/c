 #include<stdio.h>
  2 int main()
  3 {
  4     int stack[100];
  5     int top = -1;
  6     int n,ch,val,i;
  7
  8     printf("enter the size of stack:");
  9     scanf("%d",&n);
 10     if(n <= 0 || n>100)
 11     {
 12         printf("invalid size\n");
 13         return 1;
 14     }
 15     while(1)
 16     {
 17         printf("\nSTACK OPERATIONS\n");
 18         printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
 19         printf("enter your choice:");
 20         scanf("%d",&ch);
 21
 22         if(ch==1)/*push*/
 23         {
 24             if(top == n-1)
 25             {
 26                 printf("stack overflow\n");
 27             }
 28             else
 29             {
 30                 printf("enter value:");
 31                 scanf("%d",&val);
 32                 top++;
 33                 stack[top] = val;
 34                 printf("%d pushed\n",val);
 35             }
 36         }
 37         else if(ch == 2)/* pop */
 38         {
 39             if(top == -1)
 40             {
 41                 printf("stack underflow\n");
 42             }
 43             else
 44             {
 45                 printf("%d popped\n",stack[top]);
 46                 top--;
 47             }
 48         }
 49         else if(ch == 3)/* DISPLAY*/
 50         {
           if(top == -1)
 52             {
 53                 printf("stack is empty\n");
 54             }
 55             else
 56             {
 57                 printf("stack elements are:\n");
 58                 for (i = top; i>=0;i--)
 59                 {
 60                     printf("%d\n",stack[i]);
 61                 }
 62                 }
 63                 }
 64                 else if(ch == 4)/* exit*/
 65                 {
 66                      break;
 67                 }
 68                 else
 69                 {
 70                     printf("invalid choice!\n");
 71                 }
 72                 }
 73                 return 0;
 74              }




output:-

enter the size of stack:2

STACK OPERATIONS
1.PUSH
2.POP
3.DISPLAY
4.EXIT
enter your choice:1
enter value:2
2 pushed

STACK OPERATIONS
1.PUSH
2.POP
3.DISPLAY
4.EXIT
enter your choice:2
2 popped

STACK OPERATIONS
1.PUSH
2.POP
3.DISPLAY
4.EXIT
enter your choice:3
stack is empty

STACK OPERATIONS
1.PUSH
2.POP
3.DISPLAY
4.EXIT
enter your choice:4

