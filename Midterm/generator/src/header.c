#include "includes.h"

void print_header(int width)
{
    char str[10][128] = MODULE_TEMPLATE;
    for (int i = 0; i < 10; i++)
    {
        if (str[i][0] == 0)
            break;
        else if (str[i][0] == '\t' && str[i][1] == 'i')
        {
            sprintf(str[i], str[i], width - 1);
        }
        else if (str[i][0] == '\t' && str[i][1] == 'o')
        {
            sprintf(str[i], str[i], 2 * width - 1);
        }
        printf("%s\n", str[i]);
    }
    printf("\n");
}