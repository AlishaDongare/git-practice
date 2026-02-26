#Alisha Dongare
//lAKSH

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

void at_end(struct Node **head, int data);

int main() {
    struct Node *head = NULL;
    at_end(&head, 67);
    return 0;
}

void at_end(struct Node **head, int data) {
    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = data;
    temp->link = NULL;

    if (*head == NULL) {
        *head = temp;
        return;
    }

    struct Node *ptr = *head;
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

