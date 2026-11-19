#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>


struct Node{
    int data;
    struct Node *next;
};

int main(){
    printf("SINGLY LINKED LIST!\n");
    struct Node last = {30, NULL}; //first we created the last node stores value of last node and null pinter as there is nothing next
    struct Node second = {20, &last}; //stores value of second node and memory address of last node(as in pointer to last node)
    struct Node head = {10, &second}; //head-first node-> stores value of 1st node and pointer to 2nd node(memory address of second node)
    
    struct Node* temp = &head; //gonna create a temporary node that points to the head node
    
    while (temp!=NULL) {
        printf("%d ->", temp->data); //we are getting the data value at the location of the pointer that is stored
        temp = temp->next; //hamne head store kiya hai isme to jo &head ka next hai(&seocnd) vo ham temp ko assign kar rahe hain basically
        //aur isi tarah hamari loop chalti rahegi
        //temp will become node*temp = &second and then this process will repeat
    }
    printf("NULL\n");
    
    
    return 0;
}