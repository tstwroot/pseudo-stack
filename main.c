#include <stdio.h>
#include "./includes/stack.h"
#include "./includes/helpers.h"

int main(void)
{
  struct stack* stack = new_stack(); 
  int value = 0, op = 0, quit = 0;
  while(quit != 1)
  {
    display_stack(stack);
    printf("What do you want to do  ?\n");
    printf("[1] - PUSH\n");
    printf("[2] - POP\n");
    printf("[3] - QUIT\n");
    printf(">> ");
    scanf("%d", &op);
    if(op == 1)
    {
      printf("Type the value: ");
      scanf("%d", &value);
      push(stack, value);
    }
    else if(op == 2)
    {
      pop(stack);
    }
    else if(op == 3)
    {
      quit = 1;
    }
    else
    {
      printf("Invalid Option. Try Again.\n");
    }
    op = 0;
    value = 0;
  }
  free_stack(stack);
}
