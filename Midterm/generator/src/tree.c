#include "includes.h"
extern queue_t *queue;

int csa_cnt;
int tree_cnt;

static void carry_save_op(int width)
{
    qnode_t *p1 = dequeue();
    qnode_t *p2 = dequeue();
    qnode_t *p3 = dequeue();
    char csa[3][64];
    char csa_t[3][64] = CSA_TEMPLATE;

    /* new variable */
    char carry[16], sum[16];
    sprintf(carry, "tree%d", tree_cnt++);
    sprintf(sum, "tree%d", tree_cnt++);
    printf("\twire\t[%d : 0] %s, %s;\n", width - 1, carry, sum);

    /* instantiate csa */
    sprintf(csa[0], csa_t[0], width, csa_cnt++);
    sprintf(csa[1], csa_t[1], carry, sum);
    sprintf(csa[2], csa_t[2], p1->name, p2->name, p3->name);
    for (int i = 0; i < 3; i++)
        printf("\t%s\n", csa[i]);

    enqueue(carry, TYPE_CS);
    enqueue(sum, TYPE_CS);
}

static void final_adder_op(int width)
{
    qnode_t *p1 = dequeue();
    qnode_t *p2 = dequeue();

    char cla_t[3][64] = CLA_TEMPLATE;
    char cla[3][64];

    /* instantiate cla */
    sprintf(cla[0], cla_t[0], width);
    sprintf(cla[1], cla_t[1], "", "product_o");
    sprintf(cla[2], cla_t[2], p1->name, p2->name, "1'b0");
    for (int i = 0; i < 3; i++)
        printf("\t%s\n", cla[i]);
}

void tree_process(int width)
{
    csa_cnt = 0;
    tree_cnt = 0;
    while (1)
    {
        if (queue == NULL)
            construct_queue();
        else if (queue->size == 2)
        {
            final_adder_op(width);
            return;
        }
        else
        {
            carry_save_op(width);
        }
    }
    printf("\n");
}
