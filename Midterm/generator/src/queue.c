#include "includes.h"

queue_t *queue = NULL;

void construct_queue()
{
    if ((queue = (queue_t *)malloc(sizeof(queue_t))) == NULL) {
        perror("Mempry Allocation Error");
        exit(EXIT_FAILURE);
    }
    if ((queue -> head = (qnode_t *)malloc(sizeof(qnode_t))) == NULL) {
        perror("Mempry Allocation Error");
        exit(EXIT_FAILURE);
    }
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
    if ((ptr -> next = (qnode_t *)malloc(sizeof(qnode_t))) == NULL) {
        perror("Mempry Allocation Error");
        exit(EXIT_FAILURE);
    }
    strncpy(ptr->next->name, name, strlen(name));
    ptr->next->type = type;
    ptr->next->next = NULL;
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
