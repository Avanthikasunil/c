 #include<stdio.h>
  2 #define SIZE 5
  3 int queue[SIZE];
  4 int front = -1,rear= -1;
  5 void enqueue(int value){
  6     if((rear+1)% SIZE==front){
  7         printf("queue is FULL[overflow].\n");
  8         return;
  9     }
 10     if(front==-1)
 11         front = 0;
 12     rear = (rear+1)%SIZE;
 13     queue[rear] = value;
 14     printf("%d inserted.\n",value);
 15 }
 16 void dequeue(){
 17     if(front==-1){
 18         printf("queue is EMPTY(underflow).\n");
 19         return;
 20     }
 21     printf("%d deleted.\n", queue[front]);
 22     if(front == rear)
 23         front = rear = -1;
 24     else
 25         front = (front + 1) % SIZE;
 26 }
 27 void display(){
 28     if (front == -1){
 29         printf("queue is EMPTY.\n");
 30         return;
 31     }
 32     printf("queue:");
 33     int i = front;
 34     while(1){
 35         printf("%d",queue[i]);
 36         if(i==rear)
 37             break;
 38         i = (i+1)%SIZE;
 39     }
 40     printf("\n");
 41 }
 42 int main(){
 43     int choice,value;
 44     while(1){
 45         printf("\n---circular queue---\n");
 46         printf("1.Insert\n");
 47         printf("2.Delete\n");
 48         printf("3.Display\n");
 49         printf("4.Exit\n");
 50         printf("Enter choice:");
 51         scanf("%d",&choice);
 52         switch(choice){
 53             case 1:
 54                 printf("enter value to insert:");
 55                 scanf("%d",&value);
 56                 enqueue(value);
 57                 break;
 58             case 2:
 59                 dequeue();
 60                 break;
 61             case 3:
 62                 display();
 63                 break;
 64             case 4:
 65                 return 0;
 66             default:
 67                 printf("Invalid choice.\n");
 68             }
 69     }
 70 }
