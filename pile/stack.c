#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

//creation de pile
Stack new_stack(void)
{
    return NULL;
}

//verification si vide
Bool is_empty_stack(Stack st)
{
    if (st == NULL)
        return true;
    else
        return false;
}

//ajout
Stack push_stack(Stack st, int x)
{
    StackElement *element;

    element = malloc(sizeof(*element));

    if (element == NULL)
    {
        fprintf(stderr,"probleme allocation dynamique");
        exit(EXIT_FAILURE);
    }

    element->value = x;
    element->next = st;

    return element;
}

Stack clear_stack(Stack st)
{
    while (!is_empty_stack(st))
        st = pop_stack(st);

    return new_stack();
}

void print_stack(Stack st)
{
    if (is_empty_stack(st))
    {
        printf("Rien a afficher la pile est vide");
        return;
    }

    while (!is_empty_stack(st))
    {
        printf("\n[%d]",st->value);
        st = st->next;
    }
}

Stack pop_stack(Stack st)
{
    StackElement *element;
    if(is_empty_stack(st))
        return new_stack();
    element = st->next;
    free(st);

    return element;
}

//sommet de la pile
int top_stack (Stack st)
{
    if (is_empty_stack(st))
    {
        printf("\nla pile est vide\n");
        return -1;
    }
    return st->value;
}

//taille de la pile
int lenght_Stack(Stack st)
{
    int lenght = 0;
    while (!is_empty_stack(st))
    {
        lenght++;
        st = st->next;
    }
    return lenght;
}
