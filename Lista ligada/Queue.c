#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    Node *prev;
    Node *next;
    int dado;
} Node;

Node *nodeConstruct(int dado){
    Node *no =  malloc(sizeof(Node));
    no->prev = NULL;
    no->next = NULL;
    no->dado = dado;

    return no;
}

typedef struct  Queue
{
    int size;
    Node *head;
    Node *tail;
} Queue;

Queue queueConstruct(){
    Queue queue;
    queue.head = NULL;
    queue.tail = NULL;
    queue.size = 0;   

    return queue;
}

void enqueue(int value, Queue *queue){
    queue->size++;

    Node *newNode = nodeConstruct(value);

    if(queue->head == NULL){
        queue->head = newNode;
        queue->tail = newNode;

        return;
    }
    
    queue->tail->next = newNode;
    newNode->prev = queue->tail;
    queue->tail = newNode;
}

int dequeue(Queue * queue){

    Node * node = queue->head;
    int valor = node->dado;

    queue->head = node->next;
    queue->head->prev = NULL;

    return valor;

    free(node);
}

int peek(Queue * queue){
    return queue->head->dado;
     
}

int size(Queue * queue){
    return queue->size;
}