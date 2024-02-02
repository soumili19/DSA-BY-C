#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;

int main() {
    struct node* temp = NULL;
    struct node* newnode = NULL;
    int choice;

    do {
        newnode = (struct node*)malloc(sizeof(struct node));
        
        printf("Enter the data: ");
        scanf("%d", &(newnode->data));
        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue? Enter 1 to continue, 0 to stop: ");
        scanf("%d", &choice);

    } while (choice != 0);

    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
