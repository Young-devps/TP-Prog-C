#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef enum
{
    false,
    true
}Bool;

/*defintion d'une pile*/
typedef struct StackElement
{
    unsigned int value;
    struct StackElement *next;

}StackElement, *Stack;

/*prototype des fonctions*/

Stack new_stack(void);
Bool is_empty_stack(Stack st);
Stack push_stack(Stack st, int x);
Stack clear_stack(Stack st);
Stack pop_stack(Stack st);
int lenght_Stack(Stack st);

int top_stack (Stack st);
void print_stack(Stack st);

#endif // STACK_H_INCLUDED
