#include <stdlib.h>
#include "./includes/stack.h"

struct stack*
new_stack()
{
  struct dinamic_stack* stack = (struct dinamic_stack*)malloc(sizeof(struct dinamic_stack));
  stack->base = NULL;
  stack->end = NULL;
  stack->size = 0;
  return stack;
}

struct node*
new_node(int value)
{
  struct node* new_node = (struct node*)malloc(sizeof(struct node));
  new_node->next = NULL;
  new_node->back = NULL;
  new_node->value = value;
  return new_node;
}

void
push(struct dinamic_stack *stack, int value)
{
  struct node* newnode = new_node(value);
  if(stack->size == 0 || stack->base == NULL)
  {
       stack->base = newnode;
  }
  else
  {
    struct node *aux = stack->base;
    while(aux->next != NULL)
    {
      aux = aux->next;
    }
    newnode->back = aux;
    aux->next = newnode;
  }
  stack->size++;
  stack->end = newnode;
}

void
pop(struct dinamic_stack *stack)
{
  if(stack->size == 0 || stack->base == NULL)
  {
    return;
  }

  if(stack->size == 1)
  {
    free(stack->base);
    stack->base = NULL;
    return;
  }
  else
  {
    struct node* aux = stack->base;
    while(aux->next != NULL)
    {
      aux = aux->next;
    }
    aux->back->next = NULL;
    stack->end = aux->back;
    free(aux);
  }
  stack->size--;
}

void
free_stack(struct dinamic_stack* stack)
{
  if(stack->size == 0 || stack->base == NULL)
  {
    return;
  }

  struct node* aux = stack->end;
  while(aux != stack->base)
  {
    aux = aux->back;
    free(aux->next);
  }
  free(aux);
}