#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
#define LEN 20

/* external variables */
int contents[STACK_SIZE];
int top = 0;

/* prototypes */
int evaluate_RPN_expression(const char* expression);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void) {
	char expression[LEN];

	for (;;) {
		printf("Enter an RPN expression: ");
		gets(expression);
		evaluate_RPN_expression(expression);
		printf("Value of expression: %d\n", evaluate_RPN_expression(expression));
	}

	return 0;
}

int evaluate_RPN_expression(const char *expression) {
	int a, b;
	while (*expression) {
		if (*expression == 'q')
			exit(EXIT_SUCCESS);
		else if (isdigit((int) *expression)) {
			push(*expression - '0');
		} else if (*expression != '=') {
			switch (*expression) {
				case '+':
					b = pop(); a = pop();
					push(a + b); break;
				case '-':
					b = pop(); a = pop();
					push(a - b); break;
				case '*':
					b = pop(); a = pop();
					push(a * b); break;
				case '/':
					b = pop(); a = pop();
					push(a / b); break;
				default: break;
			}
		} else {
			return pop();
		}
		expression++;

	}
	return 0;
}

/*
 *	make_empty:	clears the stack by assigning 0 to the
 *				variable top.
 */
void make_empty(void) {
	top = 0;
}

/*
 *	is_empty:	checks whether the stack is empty by
 *				checking the value of top variable. If its
 *				0 then returns true else returns false.
 */
bool is_empty(void) {
	return top == 0;
}

/*
 *	is_full:	checks whether stack is full by checking the
 *				value of top variable. If its equal to the
 *				size of stack then it returns true else
 *				false.
 */
bool is_full(void) {
	return top == STACK_SIZE;
}

/*
 *	push:	if a false condition is returned by is_full()
 *			inserts a new value in the stack and increments
 *			top. If is_full returns true then calls out a
 *			stack overflow.
 */
void push(int i) {
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

/*
 *	pop:	if a is_empty returns false returns the content
 *			of stack at current position of stack while
 *			decrementing it. If is_empty is true then calls
 *			for underflow of stack.
 */
int pop(void) {
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
	return 0;
}

void stack_overflow(void) {
	printf("Expression is too complex.\n");
	exit(EXIT_FAILURE);
}

void stack_underflow(void) {
	printf("Not enough operands in expression.\n");
	exit(EXIT_FAILURE);
}