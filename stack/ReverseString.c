#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100 // maximum number of characters

int top = -1;
char stack_string[MAX];

int isFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

void push(char item)
{
    if (isFull())
    {
        printf("\nStack is full!\n");
        return;
    }
    top++;
    stack_string[top] = item;
}

char pop()
{
    if (isEmpty())
    {
        printf("\nStack is empty!\n");
        return 0;
    }
    return stack_string[top--];
}

void reverse(char c[], int n)
{
    int i, j;

    // push
    for (i = 0; i < n; i++)
    {
        push(c[i]);
    }

    // pop
    for (j = 0; j < n; j++)
    {
        c[j] = pop();
    }
}

int main(int argc, char const *argv[])
{
    char str[MAX];
    printf("Enter a string ");
    scanf("%[^\n]s", str);
    reverse(str, strlen(str));
    printf("Reverse string: %s", str);
    return 0;
}
