#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>   /* C99 only */

#define STACK_SIZE 100

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);

static int contents[STACK_SIZE];
static int *top_ptr;

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

void make_empty(void)
{
  top_ptr = &contents[0];
}

bool is_empty(void)
{
  return top_ptr == &contents[0];
}

bool is_full(void)
{
  return top_ptr == &contents[STACK_SIZE];
}

void push(int i)
{
  if (is_full())
    terminate("Error in push: stack is full.");
  *top_ptr++ = i;
}

int pop(void)
{
  if (is_empty())
    terminate("Error in pop: stack is empty.");
  return *(--top_ptr);
}
