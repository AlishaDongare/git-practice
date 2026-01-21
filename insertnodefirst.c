#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* link;
};

struct Node* addfirst(struct Node* head, int data);  // function declaration

int main(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 9;
    head->link = NULL;

    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = 34;
    ptr->link = NULL;

    head->link = ptr;

    head = addfirst(head, 56);

    struct Node* temp = head;
    while(temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->link;
    }

    return 0;
}

struct Node* addfirst(struct Node* head, int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data; 
    ptr->link = head;
    return ptr;
}
