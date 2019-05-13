#include "search.h"
#include "structures.h"

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>

#define LENGHT 128

int search_sth(contact* head)
{

    if(head == NULL)
    {
        printf("No contacts to search!\n");
        return 1;
    }
    int id;
    char search[LENGHT];

    fflush(stdin);
    fgets(search, LENGHT, stdin);


    while(head)
    {
        if(strstr(head->name, search) == 0)
        {
            id = head->ID;
            printf("Znaleziono w ID = %d", id);
            return id;

        }
        else
        {
            printf("siema");
            head = head->next;
        }

    }
    return -1;
}
