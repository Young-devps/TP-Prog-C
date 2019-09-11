#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{

Stack sta = new_stack();
    print_stack(sta);
    printf("\nTaille de la pile:%d\n", lenght_Stack(sta));

    printf("\n\n------------------------------------\n\n");

    sta = push_stack(sta , 14);
    sta = push_stack(sta, 47);
    sta = push_stack(sta, 23);
    sta = push_stack(sta, 31);
    print_stack(sta);
    printf("Sommet actuel: %d\n",top_stack(sta));
    printf("\nTaille de la pile:%d\n", lenght_Stack(sta));

    printf("\n\n------------------------------------\n\n");

    sta = pop_stack(sta);
    print_stack(sta);
    printf("\nTaille de la pile:%d\n", lenght_Stack(sta));

    printf("\n\n------------------------------------\n\n");

    sta = clear_stack(sta);
    print_stack(sta);
    printf("Sommet actuel: %d\n",top_stack(sta));
    printf("\nTaille de la pile:%d\n", lenght_Stack(sta));




    return 0;
}
