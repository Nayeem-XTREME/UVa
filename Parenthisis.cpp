#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char stack[200];

int push(char data, int top)
{
	stack[++top] = data;
	return top;
}

int pop(int top)
{
	top = top - 1;
	return top;
}

int main()
{
	int T, i, j, l;
	int top;
	char A[200], test[10];

	gets(test);
	T = atoi(test);
	
	for (i = 0; i < T; i++) {
		top = -1;
		
		gets(A);
		l = strlen(A);
		
		for (j = 0; j < l; j++) {
			
			if ((A[0] == ')' || A[0] == ']'))
				top = 10;
			
			else if (A[j] == '(' || A[j] == '[')
				top = push(A[j], top);
				
			else if (A[j] == ')' || A[j] == ']') {
				
				if (A[j] == ')' && stack[top] == '(')
					top = pop(top);
					
				else if (A[j] == ']' && stack[top] == '[')
					top = pop(top);
					
				else if (top == -1 && (A[j] == ')' || A[j] == ']'))
					top = pop(top);
			}
				
		}
		
		
		if (top == -1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	
	
	return 0;
}
