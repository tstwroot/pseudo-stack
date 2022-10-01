#ifndef __STACK_H__
#define __STACK_H__

struct node
{
  int value;
  struct node *next, *back;
};

struct stack
{
  int size;
  struct node *base, *end;
};

// Creation methods
struct stack* new_stack();
struct node* new_node(int);

// Operation methods
void push(struct stack*, int);
void pop(struct stack*);
void free_stack(struct stack*);

#endif
