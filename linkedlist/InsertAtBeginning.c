// Linked List: Inserting a node at beginning
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void insertNodeAtBeginning(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void printList()
{
    struct Node *temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int n, i, x;
    head = NULL;
    printf("How many numbers you want to insert?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the number\n");
        scanf("%d", &x);
        insertNodeAtBeginning(x);
        printList();
    }
    return 0;
}
