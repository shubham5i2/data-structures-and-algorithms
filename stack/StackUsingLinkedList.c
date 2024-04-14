#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

struct Node *top = NULL;

void push(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node *));
    temp->data = x;
    temp->link = top;
    top = temp;
}

void pop()
{
    struct Node *temp;
    if (top == NULL)
    {
        printf("Nothing to pop. Stack is empty");
        return;
    }
    temp = top;
    top = temp->link;
    free(temp);
}

int peek()
{
    if (top == NULL)
    {
        printf("\nStack is empty");
        return 0;
    }
    return top->data;
}

int main(int argc, char const *argv[])
{
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    pop();
    pop();
    printf("\nTop element %d", peek());
    return 0;
}
