#include "includes.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Not Enough Arguments\n");
        return 1;
    }
    int width = atoi(argv[1]);
    print_header(width);
    print_partial_pdt(width);
    tree_process(width * 2);

    printf("endmodule\n");
}