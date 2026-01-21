#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

/* function to add node at end */
void add_at_end(struct Node *head, int data) {
    struct Node *ptr = head;
    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

/* function to add node in middle */
void addmiddle(struct Node *head, int data, int position) {
    struct Node *ptr = head;
    struct Node *ptr2 = malloc(sizeof(struct Node));

    ptr2->data = data;
    ptr2->link = NULL;

    position--;
    while (position != 1) {
        ptr = ptr->link;
        position--;
    }

    ptr2->link = ptr->link;
    ptr->link = ptr2;
}

int main() {
    struct Node *head = malloc(sizeof(struct Node));
    head->data = 45;
    head->link = NULL;

    add_at_end(head, 93);
    add_at_end(head, 3);

    int data = 67, position = 3;
    addmiddle(head, data, position);

    struct Node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}
