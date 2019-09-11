#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
    List myList = new_list();

    preint_list(myList);
    myList = push_back_list(myList,36);
    preint_list(myList);

    myList=push_front_list(myList,87);
    myList=push_back_list(myList,-4);

    myList=pop_front_list(myList);
    myList=pop_front_list(myList);
    preint_list(myList);

    myList=pop_back_list(myList);
    preint_list(myList);

    myList=list_clear(myList);
    preint_list(myList);


    return 0;
}
