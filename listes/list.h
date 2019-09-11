#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

typedef enum
{
     false,
     true
}Bool;

/*definition d'une Liste*/
typedef struct ListElement
{
    int value;
    struct ListElement *next;
}ListElement, *List;

/*les prototypes*/

List new_list(void);
Bool is_empty_list(List li);
int list_lenght(List li);
void preint_list(List li);
List push_back_list(List li,int x);
List push_front_list(List li, int x);
List pop_back_list(List li);
List pop_front_list(List li);
List list_clear(List li);
#endif // LIST_H_INCLUDED
