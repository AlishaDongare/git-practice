//Pallindrome 

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* reverse(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* temp = NULL;

    while (head != NULL) {
        temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }

    return prev;
}

int isPalindrome(struct Node* head) {
    if (head == NULL || head->next == NULL)
        return 1;

    struct Node* slow = head;
    struct Node* fast = head;

 
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    struct Node* second = reverse(slow->next);
    struct Node* first = head;

    int palindrome = 1;

    struct Node* tempSecond = second;
    while (tempSecond != NULL) {
        if (first->data != tempSecond->data)
            palindrome = 0;

        first = first->next;
        tempSecond = tempSecond->next;
    }


    slow->next = reverse(second);

    return palindrome;
}

int main()
{
    struct Node* head=NULL;
    head = reverse(head);
    
    return 0;
}
