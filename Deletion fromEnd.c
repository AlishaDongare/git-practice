#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

struct Node* addfirst(struct Node* head, int data);
struct Node* deleteFromEnd(struct Node* head);
void printList(struct Node* head);

int main() {

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 9;
    head->link = NULL;

    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = 34;
    ptr->link = NULL;

    head->link = ptr;

    head = addfirst(head, 56);

    printf("Original list:\n");
    printList(head);

    head = deleteFromEnd(head);

    printf("After deleting from end:\n");
    printList(head);

    return 0;
}

struct Node* addfirst(struct Node* head, int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->link = head;
    return ptr;
}


struct Node* deleteFromEnd(struct Node* head) {
    // Case 1: List is empty
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    
    if (head->link == NULL) {
        free(head);
        return NULL;
    }

    
    struct Node* temp = head;
    struct Node* prev = NULL;

    while (temp->link != NULL) {
        prev = temp;          
        temp = temp->link;   
    }

    
    prev->link = NULL;        
    free(temp);              

    return head;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}
