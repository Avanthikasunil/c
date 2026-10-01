 #include<stdio.h>
  2 #include<stdlib.h>
  3 struct Node{
  4     int data;
  5     struct Node *next;
  6 };
  7 int main(){
  8     struct Node *front = NULL;
  9     struct Node *rear = NULL;
 10     struct Node *newNode,*temp;
 11     int choice,value;
 12     while(1){
 13         printf("\n--queue using Linked List--\n");
 14         printf("1.Enqueue\n2. Dequeue\n3. display\n4. Exit\n");
 15         printf("enter your choice:");
 16         scanf("%d",&choice);
 17         switch(choice){
 18             case 1:
 19                 printf("enter value to enqueue:");
 20                 scanf("%d",&value);
 21                 newNode = (struct Node*)malloc(sizeof(struct Node));
 22                 if(newNode == NULL){
 23                     printf("queue overflow\n");
 24                     break;
 25                 }
 26                 newNode->data = value;
 27                 newNode->next = NULL;
 28                 if(rear == NULL){
 29                     (front = rear = newNode);
 30                 }else{
 31                     rear->next = newNode;
 32                     rear=newNode;
 33                 }
 34                 printf("%d enqueued to queue\n",value);
 35                 break;
 36             case 2 :
 37                 if (front==NULL){
 38                     printf("queue underflow\n");
 39                     break;
 40                 }
 41                 temp = front;
 42                 printf("%d dequeued from queue\n",
 43                         front->data);
 44                 front = front->next;
 45                 if(front==NULL)
 46                     rear=NULL;
 47                 free(temp);
 48                 break;
 49             case 3:
 50                 if (front == NULL){
                    printf("queue is empty\n");
 52                     break;
 53                 }
 54                 temp = front;
 55                 printf("queue elements:");
 56                 while(temp!=NULL){
 57                     printf("%d->",temp->data);
 58                     temp = temp->next;
 59                 }
 60                 printf("NULL\n");
 61                 break;
 62             case 4:
 63                 exit(0);
 64             default:
 65                 printf("invalid choice!\n");
 66         }
 67     }
 68     return 0;
 69 }
 70





output:-

--queue using Linked List--
1.Enqueue
2. Dequeue
3. display
4. Exit
enter your choice:1
enter value to enqueue:30
30 enqueued to queue

--queue using Linked List--
1.Enqueue
2. Dequeue
3. display
4. Exit
enter your choice:2
30 dequeued from queue

--queue using Linked List--
1.Enqueue
2. Dequeue
3. display
4. Exit
enter your choice:10
invalid choice!

--queue using Linked List--
1.Enqueue
2. Dequeue
3. display
4. Exit
enter your choice:3
queue is empty

--queue using Linked List--
1.Enqueue
2. Dequeue
3. display
4. Exit
enter your choice:4
