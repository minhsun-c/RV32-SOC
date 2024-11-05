#include "includes.h"

queue_t *queue = NULL;

void construct_queue()
{
    queue = (queue_t *)malloc(sizeof(queue_t));
    queue->head = (qnode_t *)malloc(sizeof(qnode_t));
    queue->head->next = NULL;
    queue->size = 0;
}

void enqueue(char *name, int type)
{
    if (queue == NULL)
        construct_queue();
    qnode_t *ptr = queue->head;
    while (ptr->next)
        ptr = ptr->next;
    ptr->next = (qnode_t *)malloc(sizeof(qnode_t));
    strncpy(ptr->next->name, name, strlen(name));
    ptr->next->type = type;
    queue->size++;
}

qnode_t *dequeue()
{
    if (queue == NULL || queue->size <= 0)
        return NULL;
    qnode_t *ptr = queue->head->next;
    queue->head->next = ptr->next;
    queue->size--;
    return ptr;
}