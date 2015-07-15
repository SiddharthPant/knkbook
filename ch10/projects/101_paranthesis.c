#include <stdbool.h>	/* C99 Only */
#include <stdio.h>
#include <stdlib.h>

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
	bool rbrace_flag = false, match_flag = true;
	char brace, lbrace;
	printf("Enter parantheses and/or braces: ");
	while (((brace = getchar()) != '\n') && match_flag) {	// Keep reading chars till we have unmatched braces or a newline
		switch(brace) {	//	Check what brace is?
			case '(': case '{': case '[':	// If left brace push it to stack
				push(brace);
				break;
			case ')': lbrace = '('; rbrace_flag = true; break;	// Right brace set lbrace to corresponding
			case '}': lbrace = '{'; rbrace_flag = true; break;	// left brace and flag to true
			case ']': lbrace = '['; rbrace_flag = true; break;
			default: printf("Invalid Character!\n");	// If invalid character notify and terminate
					 return 0;
		}
		if (rbrace_flag) {	//	check the flag. This tells whether the current char in brace is an rbrace
			rbrace_flag = false;	//	Reset the flag
			if(lbrace != pop()) {	// if yes then corresponding lbrace is checked
				match_flag = false;	// If the char returned by pop() is not equal to it then given braces aren't matched.
			}
		}

	}
	if (!is_empty()) {	// If stack is not empty set flag to false
		match_flag = false;
	}
	if (match_flag)
		printf("Parantheses/braces are nested properly\n");
	else
		printf("Parantheses/braces are not nested properly\n");

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
void push(char i)
{
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
char pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
	return '\0';
}

void stack_overflow(void) {
	printf("Stack overflow\n");
	exit(EXIT_SUCCESS);
}

void stack_underflow(void) {
	printf("Parantheses/braces are not nested properly\n");
	exit(EXIT_SUCCESS);
}
