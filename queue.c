 #include<stdio.h>
  2 int main()
  3 {
  4     int i,n,ch,v;
  5
  6     printf("enter size of queue:");
  7     scanf("%d",&n);
  8     if(n <= 0)
  9     {
 10         printf("invalid size!\n");
 11         return 1;
 12     }
 13     int queue[n];
 14     int f = -1,r = -1;/* front and rear;-1 meansempty*/
 15     while(1)
 16     {
 17         printf("\nMENU\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
 18         printf("enter the choice:");
 19         scanf("%d",&ch);
 20         if(ch == 1)/*enqueue*/
 21         {
 22             if(r == n-1)
 23             {
 24                 printf("queue is full!\n");
 25             }
 26             else
 27             {
 28                 printf("enter the element:");
 29                 scanf("%d",&v);
 30                 r = r + 1;
 31                 queue[r] = v;
 32                 if(f == -1)
 33                 {
 34                     f=0;
 35                 }
 36             }
 37         }
 38         else if(ch==2)/*dequeue*/
 39         {
 40             if(f==-1||f>r)
 41             {
 42                 printf("queue is empty!\n");
 43             }
 44             else
 45             {
 46                 printf("deleted%d\n",queue[f]);
 47                 f = f+1;/*move front forward*/
 48             }
 49         }
 50         else if(ch == 3)/*display*/
   {
 52             if(f==-1 || f>r)
 53             {
 54                 printf("queueis empty!/n");
 55             }
 56             else
 57             {
 58                 printf("queue is:");
 59                 for(i =f;i<=r;i++)
 60                 {
 61                     printf("%d",queue[i]);
 62                 }
 63                 printf("\n");
 64             }
 65         }
 66         else if (ch==4)/*exit*/
 67         {
 68             break;
 69         }
 70         else
 71         {
 72             printf("invalid choice!\n");
 73         }
 74     }
 75     return 0;
 76 }



output:-

enter size of queue:20

MENU
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
enter the choice:1
enter the element:10

MENU
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
enter the choice:2
deleted10

MENU
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
enter the choice:3
queueis empty!/n
MENU
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
enter the choice:4
