// delete Without using head pointer 

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void deleteNode(struct Node* link)
{
    if (link==NULL || link->next == NULL)
    {
    
        printf("Cannot delete this node\n");
        return;
    }
    struct Node* temp = link->next;
    node->data = temp->data;
    node->next = temp->next;
    free(temp);
    
int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 3;
    head->next->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->next->data = 4;
    head->next->next->next->next = NULL;
    return 0;
}
