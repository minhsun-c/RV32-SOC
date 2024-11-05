#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TYPE_PPDT 0 /* partial product */
#define TYPE_CS 1   /* generate by carry save */

#include "templates.h"

typedef struct qnode
{
    char name[32];
    int type;
    struct qnode *next;
} qnode_t;

typedef struct queue
{
    int size;
    qnode_t *head;
} queue_t;

void print_header(int);
void print_partial_pdt(int);
void enqueue(char *, int);
qnode_t *dequeue();
void construct_queue();
void tree_process(int);