#include "ft_list.h"
#include <stdio.h>

int ft_list_size(t_list *a)
{
    int i;
    t_list *current;
    i = 0;
    current = a;
    while (current -> next)
    {
        i++;
        current = current -> next;
    }
    if (current -> next == NULL)
        i++;
    return (i);
}

int get_the_last_data(t_list *a)
{
    t_list *current;
    current = a;
    while (current -> next)
        current = current -> next;
    return (current -> data);
}
int should_do_ra(t_list *a)
{
    if (a-> data > get_the_last_data(a))
        return (1);
    else   
        return (0);
}

void    push_swap_5(t_list *a)
{
    t_list *current;
    t_list *first;
    int size;

    current = a;
    first = current;
    size = ft_list_size(current);
    printf("size is %d\n",size);
    while (--size > 0)
    {
        if ((current -> data) < ((current -> next) -> data))
                current = current -> next;
        else if ((current -> data) > ((current -> next) -> data))
        {
            if (current == first)
            {
               if (should_do_ra(a) == 1)
                    printf("ra");
               else
                    printf("sa");
            }
            /*else 
            {
                j = 0;
                while ()
            }
            */
          
               printf("%d\n", current -> data);
               current= current -> next;
        } 
        size--;
}
}
#include <stdio.h>
#include <stdlib.h>



int main()
{
    // Create an instance of the t_list struct
    t_list *lista = (t_list *)malloc(sizeof(t_list));
 t_list *listb = (t_list *)malloc(sizeof(t_list));
  t_list *listc = (t_list *)malloc(sizeof(t_list));
 t_list *listd = (t_list *)malloc(sizeof(t_list));
  t_list *liste = (t_list *)malloc(sizeof(t_list));
 t_list *listf = (t_list *)malloc(sizeof(t_list));

    t_list *begin = lista;
    // Check if memory allocation was successful
    // Assign values to the struct members
    lista->next = listb; // Assuming you want the 'next' pointer to initially point to NULL
    lista->data = 13/* Assign your data here */;
    listb->next = listc; // Assuming you want the 'next' pointer to initially point to NULL
    listb->data = 5;
     listc->next = listd; // Assuming you want the 'next' pointer to initially point to NULL
    listc->data = 12/* Assign your data here */;
 listd->next = liste; // Assuming you want the 'next' pointer to initially point to NULL
    listd->data = 11;
     liste->next = listf; // Assuming you want the 'next' pointer to initially point to NULL
    liste->data = 2/* Assign your data here */;
 listf->next = NULL; // Assuming you want the 'next' pointer to initially point to NULL
    listf->data = 15;
    push_swap_5(begin);
    return 0; // Exit successfully
}

