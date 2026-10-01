#include <stdio.h>
  2 #include <stdlib.h>
  3
  4 struct Node {
  5     int data;
  6     struct Node* next;
  7 };
  8
  9 struct Node* createNode(int data) {
 10     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 11     newNode->data = data;
 12     newNode->next = NULL;
 13     return newNode;
 14 }
 15
 16 void display(struct Node* head) {
 17     struct Node* temp = head;
 18     if (temp == NULL) {
 19         printf("List is empty\n");
 20         return;
 21     }
 22     printf("Linked List: ");
 23     while (temp != NULL) {
 24         printf("%d -> ", temp->data);
 25         temp = temp->next;
 26     }
 27     printf("NULL\n");
 28 }
 29
 30 void insertAtBeginning(struct Node** head, int data) {
 31     struct Node* newNode = createNode(data);
 32     newNode->next = *head;
 33     *head = newNode;
 34 }
 35
 36 void insertAtEnd(struct Node** head, int data) {
 37     struct Node* newNode = createNode(data);
 38     if (*head == NULL) {
 39         *head = newNode;
 40         return;
 41     }
 42     struct Node* temp = *head;
 43     while (temp->next != NULL)
 44         temp = temp->next;
 45     temp->next = newNode;
 46 }
 47
 48 void insertAtPosition(struct Node** head, int data, int position) {
 49     if (position < 1) {
 50         printf("Invalid position!\n");
        return;
 52     }
 53     if (position == 1) {
 54         insertAtBeginning(head, data);
 55         return;
 56     }
 57     struct Node* temp = *head;
 58     for (int i = 1; i < position - 1 && temp != NULL; i++)
 59         temp = temp->next;
 60
 61     if (temp == NULL) {
 62         printf("Position out of range!\n");
 63         return;
 64     }
 65     struct Node* newNode = createNode(data);
 66     newNode->next = temp->next;
 67     temp->next = newNode;
 68 }
 69
 70 void deleteAtBeginning(struct Node** head) {
 71     if (*head == NULL) {
 72         printf("List is empty!\n");
 73         return;
 74     }
 75     struct Node* temp = *head;
 76     *head = temp->next;
 77     free(temp);
 78 }
 79
 80 void deleteAtEnd(struct Node** head) {
 81     if (*head == NULL) {
 82         printf("List is empty!\n");
 83         return;
 84     }
 85     if ((*head)->next == NULL) {   /* only one node */
 86         free(*head);
 87         *head = NULL;
 88         return;
 89     }
 90     struct Node* temp = *head;
 91     while (temp->next->next != NULL)
 92         temp = temp->next;
 93     free(temp->next);
 94     temp->next = NULL;
 95 }
 96
 97 void deleteAtPosition(struct Node** head, int position) {
 98     if (*head == NULL) {
 99         printf("List is empty!\n");
100         return;
    }
102     if (position < 1) {
103         printf("Invalid position!\n");
104         return;
105     }
106     struct Node* temp = *head;
107     if (position == 1) {
108         *head = temp->next;
109         free(temp);
110         return;
111     }
112     for (int i = 1; temp != NULL && i < position - 1; i++)
113         temp = temp->next;
114
115     if (temp == NULL || temp->next == NULL) {
116         printf("Position out of range!\n");
117         return;
118     }
119     struct Node* nextNode = temp->next->next;
120     free(temp->next);
121     temp->next = nextNode;
122 }
123
124 int main() {
125     struct Node* head = NULL;
126     int choice, data, pos;
127
128     while (1) {
129         printf("\n-- Linked List Menu --\n");
130         printf("1. Insert at Beginning\n2. Insert at End\n3. Insert at Position\n"
131                "4. Delete at Beginning\n5. Delete at End\n6. Delete at Position\n"
132                "7. Display\n8. Exit\n");
133         printf("Enter your choice: ");
134         if (scanf("%d", &choice) != 1) {
135             return 0;
136         }
137
138         switch (choice) {
139             case 1:
140                 printf("Enter data: ");
141                 scanf("%d", &data);
142                 insertAtBeginning(&head, data);
143                 break;
144             case 2:
145                 printf("Enter data: ");
146                 scanf("%d", &data);
147                 insertAtEnd(&head, data);
148                 break;
149             case 3:
150                 printf("Enter data and position: ");
                 scanf("%d %d", &data, &pos);
152                 insertAtPosition(&head, data, pos);
153                 break;
154             case 4:
155                 deleteAtBeginning(&head);
156                 break;
157             case 5:
158                 deleteAtEnd(&head);
159                 break;
160             case 6:
161                 printf("Enter position: ");
162                 scanf("%d", &pos);
163                 deleteAtPosition(&head, pos);
164                 break;
165             case 7:
166                 display(head);
167                 break;
168             case 8:
169                     exit(0);
170             default:
171                 printf("Invalid choice!\n");
172         }
173     }
174     return 0;
175 }
176




output:-

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 1
Enter data: 54

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 1
Enter data: 21

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 7
Linked List: 21 -> 54 -> NULL

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 1
Enter data: 66

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 7
Linked List: 66 -> 21 -> 54 -> NULL

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 2
Enter data: 33

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 7
Linked List: 66 -> 21 -> 54 -> 33 -> NULL

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 2
Enter data: 55

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 7
Linked List: 66 -> 21 -> 54 -> 33 -> 55 -> NULL

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 3
Enter data and position: 88 3

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 7
Linked List: 66 -> 21 -> 88 -> 54 -> 33 -> 55 -> NULL

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 4

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 7
Linked List: 21 -> 88 -> 54 -> 33 -> 55 -> NULL

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 5

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 7
Linked List: 21 -> 88 -> 54 -> 33 -> NULL

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 6
Enter position: 3

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 7
Linked List: 21 -> 88 -> 33 -> NULL

-- Linked List Menu --
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete at Beginning
5. Delete at End
6. Delete at Position
7. Display
8. Exit
Enter your choice: 8
