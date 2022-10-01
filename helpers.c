#include <stdio.h> 
#include "./includes/stack.h" 
#include "./includes/helpers.h"

void
display_stack(struct stack* stack)
{
	struct node* aux = stack->end;
  system("clear"); 
  printf("[YOUR STACK HERE]\n");
	if(stack->base == NULL || stack->size == 0)
  {
    printf("|\tNULL\t|\n");
    return;
  }
  while(aux != stack->base)
  {
    printf("|\t%d\t|\n", aux->value);
    aux = aux->back;
  }
    printf("|\t%d\t|\n\n", aux->value);
}
