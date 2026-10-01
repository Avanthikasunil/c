 #include <stdio.h>
  2 #include <stdlib.h>
  3 struct Node {
  4     int data;
  5     struct Node *next;
  6 };
  7 struct Node *top = NULL;
  8 void push(int value) {
  9     struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
 10     if (newNode == NULL) {
 11         printf("Stack overflow\n");
 12         return;
 13     }
 14     newNode->data = value;
 15     newNode->next = top;
 16     top = newNode;
 17     printf("%d pushed to stack\n", value);
 18 }
 19 void pop() {
 20     if (top == NULL) {
 21         printf("Stack underflow\n");
 22         return;
 23     }
 24     struct Node *temp = top;
 25     printf("%d popped from stack\n", top->data);
 26     top = top->next;
 27     free(temp);
 28 }
 29 void display() {
 30     if (top == NULL) {
 31         printf("Stack is empty!\n");
 32         return;
 33     }
 34     struct Node *temp = top;
 35     printf("Stack elements: ");
 36     while (temp != NULL) {
 37         printf("%d->", temp->data);
 38         temp = temp->next;
 39     }
 40     printf("NULL\n");
 41 }
 42 int main() {
 43     int choice, value;
 44     while (1) {
 45         printf("\n-- Stack using Linked List --\n");
 46         printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
 47         printf("Enter your choice: ");
 48         scanf("%d", &choice);
 49         switch (choice) {
 50             case 1: printf("Enter value to push: ");
                     scanf("%d", &value);
 52                     push(value);
 53                     break;
 54             case 2: pop();
 55                     break;
 56             case 3: display();
 57                     break;
 58             case 4: printf("Exiting\n");
 59                     exit(0);
 60             default: printf("Invalid choice!\n");
 61         }
 62     }
 63     return 0;
 64 }



output:-

-- Stack using Linked List --
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value to push: 30
30 pushed to stack

-- Stack using Linked List --
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 2
30 popped from stack

-- Stack using Linked List --
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 3
Stack is empty!

-- Stack using Linked List --
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 4
Exiting
