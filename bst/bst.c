1 #include <stdio.h>
  2 #include <stdlib.h>
  3
  4 struct Node {
  5     int data;
  6     struct Node *left, *right;
  7 };
  8
  9 struct Node* newNode(int key) {
 10     struct Node* node = (struct Node*)malloc(sizeof(struct Node));
 11     node->data = key;
 12     node->left = node->right = NULL;
 13     return node;
 14 }
 15
 16 struct Node* insert(struct Node* root, int key) {
 17     if (root == NULL)
 18         return newNode(key);
 19
 20     if (key < root->data)
 21         root->left = insert(root->left, key);
 22     else if (key > root->data)
 23         root->right = insert(root->right, key);
 24     else
 25         printf("%d already exists.\n", key);
 26
 27     return root;
 28 }
 29
 30 struct Node* search(struct Node* root, int key) {
 31     if (root == NULL || root->data == key)
 32         return root;
 33
 34     if (key < root->data)
 35         return search(root->left, key);
 36     else
 37         return search(root->right, key);
 38 }
 39
 40 struct Node* minNode(struct Node* root) {
 41     while (root->left != NULL)
 42         root = root->left;
 43
 44     return root;
 45 }
 46
 47 struct Node* deleteNode(struct Node* root, int key) {
 48     if (root == NULL) {
 49         printf("%d not found.\n", key);
 50         return NULL;
 51     }
 52
 53     if (key < root->data)
 54         root->left = deleteNode(root->left, key);
 55     else if (key > root->data)
 56         root->right = deleteNode(root->right, key);
 57     else {
 58         if (root->left == NULL) {
 59             struct Node* temp = root->right;
 60             free(root);
 61             return temp;
 62         }
 63
 64         if (root->right == NULL) {
 65             struct Node* temp = root->left;
 66             free(root);
 67             return temp;
 68         }
 69
 70         struct Node* succ = minNode(root->right);
 71         root->data = succ->data;
 72         root->right = deleteNode(root->right, succ->data);
 73     }
 74
 75     return root;
 76 }
 77
 78 void inorder(struct Node* root) {
 79     if (root == NULL)
 80         return;
 81
 82     inorder(root->left);
 83     printf("%d ", root->data);
 84     inorder(root->right);
 85 }
 86
 87 void preorder(struct Node* root) {
 88     if (root == NULL)
 89         return;
 90
 91     printf("%d ", root->data);
 92     preorder(root->left);
 93     preorder(root->right);
 94 }
 95
 96 void postorder(struct Node* root) {
 97     if (root == NULL)
 98         return;
 99
100     postorder(root->left);
101     postorder(root->right);
102     printf("%d ", root->data);
103 }
104
105 int main() {
106     struct Node* root = NULL;
107     struct Node* result;
108     int choice, value;
109
110     while (1) {
111         printf("\n--- Binary Search Tree ---\n");
112         printf("1. Insert\n");
113         printf("2. Delete\n");
114         printf("3. Search\n");
115         printf("4. Inorder\n");
116         printf("5. Preorder\n");
117         printf("6. Postorder\n");
118         printf("7. Exit\n");
119
120         printf("Enter choice: ");
121         scanf("%d", &choice);
122
123         switch (choice) {
124             case 1:
125                 printf("Enter value to insert: ");
126                 scanf("%d", &value);
127                 root = insert(root, value);
128                 break;
129
130             case 2:
131                 printf("Enter value to delete: ");
132                 scanf("%d", &value);
133                 root = deleteNode(root, value);
134                 break;
135
136             case 3:
137                 printf("Enter value to search: ");
138                 scanf("%d", &value);
139
140                 result = search(root, value);
141
142                 if (result != NULL)
143                     printf("%d found in the BST.\n", value);
144                 else
145                     printf("%d not found in the BST.\n", value);
146                 break;
147
148             case 4:
149                 printf("Inorder: ");
150                 inorder(root);
151                 printf("\n");
152                 break;
153
154             case 5:
155                 printf("Preorder: ");
156                 preorder(root);
157                 printf("\n");
158                 break;
159
160             case 6:
161                 printf("Postorder: ");
162                 postorder(root);
163                 printf("\n");
164                 break;
165
166             case 7:
167                 return 0;
168
169             default:
170                 printf("Invalid choice.\n");
171         }
172     }
173 }
