//Reversed the linked list by using recursive;
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node*link;
};
struct Node* reverseRecursive(struct Node* head) {
   
    if (head == NULL || head->link == NULL)
        return head;
        
    struct Node* rest = reverseRecursive(head->link);

    head->link->link = head;
    head->link = NULL;

    return rest; 
}

struct Node* addfirst(struct Node* head, int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->link = head;
    return ptr;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    head = addfirst(head, 3);
    head = addfirst(head, 2);
    head = addfirst(head, 1);

    printf("Original list:\n");
    printList(head);

    head = reverseRecursive(head);

    printf("Reversed list (recursive):\n");
    printList(head);

    return 0;
}