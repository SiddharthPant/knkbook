#include <stdbool.h>	/* C99 Only */
#include <stdio.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

/* prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
	int a, b;
	char c;

	for (;;) {
		printf("Enter an RPN expression: ");
		scanf("%c", &c);
		while(c != '=') {
			switch (c) {
				case '0': case '1': case '2': case '3': case '4':
				case '5': case '6': case '7': case '8': case '9':
							push(c);
							break;
				case '+':
							a = pop(); b = pop();
							push(a + b);
							break;
				case '-':
							a = pop(); b = pop();
							push(a - b);
							break;
				case '*':
							a = pop(); b = pop();
							push(a * b);
							break;
				case '/':
							a = pop(); b = pop();
							push(a / b);
							break;
				default :
							exit(EXIT_SUCCESS);
			}
			scanf("%c", &c);
		}
		printf("Value of expression: %d", pop());
		make_empty();
	}
	return 0;
}

/*
 *	make_empty:	clears the stack by assigning 0 to the
 *				variable top.
 */
void make_empty(void)
{
	top = 0;
}

/*
 *	is_empty:	checks whether the stack is empty by
 *				checking the value of top variable. If its
 *				0 then returns true else returns false.
 */
bool is_empty(void)
{
	return top == 0;
}

/*
 *	is_full:	checks whether stack is full by checking the
 *				value of top variable. If its equal to the
 *				size of stack then it returns true else
 *				false.
 */
bool is_full(void)
{
	return top == STACK_SIZE;
}

/*
 *	push:	if a false condition is returned by is_full()
 *			inserts a new value in the stack and increments
 *			top. If is_full returns true then calls out a
 *			stack overflow.
 */
void push(char c)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = c;
}

/*
 *	pop:	if a is_empty returns false returns the content
 *			of stack at current position of stack while
 *			decrementing it. If is_empty is true then calls
 *			for underflow of stack.
 */
char pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

void stack_overflow(void)
{
	printf("Expression is too complex\n");
	exit(EXIT_SUCCESS);
}

void stack_underflow(void)
{
	printf("Not enough operands in expression\n");
	exit(EXIT_SUCCESS);
}