#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// BASICS
// struct Node {
//   int data;
//   struct Node *next;
// };
// int main() {
//   printf("SINGLY LINKED LIST!\n");
//   struct Node last = {
//       30, NULL}; // first we created the last node stores value of last node
//       and
//                  // null pinter as there is nothing next
//   struct Node second = {
//       20, &last}; // stores value of second node and memory address of last
//                   // node(as in pointer to last node)
//   struct Node head = {
//       10, &second}; // head-first node-> stores value of 1st node and pointer
//       to
//                     // 2nd node(memory address of second node)
//   struct Node *temp =
//       &head; // gonna create a temporary node that points to the head node
//   while (temp != NULL) {
//     printf("%d ->", temp->data); // we are getting the data value at the
//                                  // location of the pointer that is stored
//     temp = temp->next; // hamne head store kiya hai isme to jo &head ka next
//                        // hai(&seocnd) vo ham temp ko assign kar rahe hain
//                        // basically
//     // aur isi tarah hamari loop chalti rahegi
//     // temp will become node*temp = &second and then this process will repeat
//   }
//   printf("NULL\n");
//   return 0;
// }

// SINGLY LINKED LISTS!!!!!!!!!FULL

// defining node structure
struct Node {
  int data;          // data in ll
  struct Node *next; // to store the pointer to next element of ll
};

// create new node
struct Node *createNewNode(int data);

// INSERT NODE
// INSERT NODE AT THE BEGINNING
void insertAtFirst(struct Node **head, int data);
// INSERT NODE AT END
void insertAtLast(struct Node **head, int data);
// INSERT NODE AT ANY POINT
void insertNode(struct Node **head, int data, int position);
// DELETE NODE
// DELETE NODE AT THE BEGINNING
void deleteAtFirst(struct Node **head);
// DELETE NODE AT END
void deleteAtLast(struct Node **head);
// DELETE NODE AT ANY POINT
void deleteNode(struct Node **head, int position);
// PRINT LINKED LIST
void printLinkedList(struct Node *head);

int main() {
  struct Node *head = NULL; // initializing an empty linked list
  // insert at first

  printf("LL after inserting the first node is: ");
  insertAtFirst(&head, 10);
  printLinkedList(head);
  // insert at last

  printf("LL after inserting the last node is: ");
  insertAtLast(&head, 30);
  printLinkedList(head);

  printf("LL after inserting the last node is: ");
  insertAtLast(&head, 40);
  printLinkedList(head);

  printf("LL after inserting the last node is: ");
  insertAtLast(&head, 50);
  printLinkedList(head);
  // nserting in middle
  printf("LL after inserting the node at postion 1: ");
  insertNode(&head, 20, 1);
  printLinkedList(head);
  // delete first node

  printf("LL after deleting the first node: ");
  deleteAtFirst(&head);
  printLinkedList(head);

  // delete last node
  printf("LL after deleting the last node: ");
  deleteAtLast(&head);
  printLinkedList(head);

  // delete node at position 2
  printf("LL after deleting the node at postion 2: ");
  deleteNode(&head, 2);
  printLinkedList(head);
  return 0;
}

struct Node *createNode(int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data =
      data; // in our struct new node, the data = to the data we passed into the
            // function. this is basically same as saying newnode.data = data
  newNode->next = NULL; // this is basically same as saying newnode.next = null
  return newNode;
}

void printLinkedList(struct Node *head) {
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d ->", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

void insertAtFirst(struct Node **head, int data) {
  struct Node *newNode = createNode(data);
  newNode->next = *head;
  *head = newNode;
}

void insertAtLast(struct Node **head, int data) {
  struct Node *newNode = createNode(data);
  if (*head == NULL) {
    *head = newNode;
    return;
  }
  struct Node *temp = *head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
}

void insertNode(struct Node **head, int data, int position) {
  struct Node *newNode = createNode(data);
  if (position == 0) {
    insertAtFirst(head, data);
    return;
  }

  struct Node *temp = *head;
  for (int i = 0; temp != NULL && i < position - 1; i++) {
    temp = temp->next;
  }

  if (temp == NULL) {
    printf("Position our of rane\n");
    free(newNode);
    return;
  }

  newNode->next = temp->next;
  temp->next = newNode;
}

void deleteAtFirst(struct Node **head) {
  if (head == NULL) {
    printf("LIST IS ALREADY EMPTY!!\n");
    return;
  }
  struct Node *temp = *head;
  *head = temp->next;
  free(temp);
}

void deleteAtLast(struct Node **head) {
  if (*head == NULL) {
    printf("LIST IS ALREADY EMPTY!!\n");
    return;
  }
  struct Node *temp = *head;
  if (temp->next == NULL) {
    free(temp);
    *head = NULL;
    return;
  }
  while (temp->next->next != NULL) {
    temp = temp->next;
  }
  free(temp->next);
  temp->next = NULL;
}

void deleteNode(struct Node **head, int position) {
  if (*head == NULL) {
    printf("List is empty\n");
    return;
  }

  struct Node *temp = *head;
  if (position == 0) {
    deleteAtFirst(head);
    return;
  }
  for (int i = 0; temp != NULL && i < position - 1; i++) {
    temp = temp->next;
  }
  if (temp == NULL || temp->next == NULL) {
    printf("POSITION OUT OF RANGE\n");
    return;
  }
  struct Node *next = temp->next->next;
  free(temp->next);
  temp->next = next;
}
