//Reversed the linked list



#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node*link;
};
struct Node * reverse(struct Node*head)
{
    struct Node*prev = NULL;
    struct Node*temp2 = NULL;
    
    while(head!= NULL)
    {
        temp2 = head->link;
        head->link = prev;
        prev = head;
        head = temp2;
    }
    return prev;
}
int main()
{
    struct Node* head=NULL;
    head = reverse(head);
    
    return 0;
}