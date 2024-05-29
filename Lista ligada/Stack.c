#include <stdio.h>

#include <stdlib.h>

typedef struct Node
{
    Node *prev;
    int dado;

} Node;

Node *nodeConstruct(int dado)
{
    Node *no = malloc(sizeof(Node));
    no->prev = NULL;
    no->dado = dado;

    return no;
}

typedef struct Stack
{
    int size;
    Node *head;

} Stack;

Stack stackConstruct()
{
    Stack stack;
    stack.head = NULL;
    stack.size = 0;

    return stack;
}

void push(int value, Stack *head)
{
    head->size++;
    Node *newNode = (Node *)malloc(sizeof(Node));

    newNode->dado = value;
    newNode->prev = head->head;
    head->head = newNode;
}

int pop(Stack *head, Node *prev)
{
    head->size--;

    int aux = head->head->dado;

    Node *noAux = head->head;
    // head = NULL;
    head->head = prev;
    free(head->head);
}