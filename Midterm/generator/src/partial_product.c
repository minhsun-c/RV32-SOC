#include "includes.h"

static void declare_pdt(int width)
{
    printf("\twire\t[%d : 0] ", 2 * width - 1);
    for (int i = 0; i < width; i++)
    {
        char name[32] = "ppdt%d";
        sprintf(name, name, i);
        printf("%s", name);
        if (i != width - 1)
            printf(", ");
        else
            printf(";\n");
        enqueue(name, TYPE_PPDT);
    }
}

static void do_partial_product(int width)
{
    for (int i = 0; i < width; i++)
    {
        if (i == 0)
        {
            char temp[64] = "A_i & {%d{B_i[0]}}";
            sprintf(temp, temp, width);
            printf("\tassign ppdt%d = {%d'b0, %s};\n",
                   i, width, temp);
        }
        else
        {
            char temp[64] = "A_i & {%d{B_i[%d]}}";
            sprintf(temp, temp, width, i);
            printf("\tassign ppdt%d = {%d'b0, %s, %d'b0};\n",
                   i, width - i, temp, i);
        }
    }
}

void print_partial_pdt(int width)
{
    declare_pdt(width);
    do_partial_product(width);
}