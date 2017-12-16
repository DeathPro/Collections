#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curses.h>

int *stack;
int *stack2;
int top = -1;
int size = 3;

void push() {
	int number;

	if (top == -1) {
		printf("Stack Was Empty.\n\n");
		stack = (int *) malloc(sizeof(int) * size);
		printf("Please Enter a Number : ");
		scanf("%d", &number);
		top++;
		stack[top] = number;
		printf("asdasd\n");
	} else if (top == (size - 1)) {
		size++;

		stack2 = (int *) malloc(sizeof(int) * size);
		for (int i = 0; i <= top; i++)
			stack2[i] = stack[i];

		stack = (int *) malloc(sizeof(int) * size);
		for (int i = 0; i <= top; i++)
			stack[i] = stack2[i];

		printf("Please Enter a Number : ");
		scanf("%d", &number);
		top++;
		stack[top] = number;
	} else {
		printf("Please Enter a Number : ");
		scanf("%d", &number);
		top++;
		stack[top] = number;
	}

}
void pop() {

	if (top == -1)
		printf("Stack is Empty ! \n");
	else {
		printf("%d Number Has Been Deleted.\n", stack[top]);
		top--;
		size--;

		stack2 = (int *) malloc(sizeof(int) * size);

		for (int i = 0; i <= top; i++)
			stack2[i] = stack[i];
		printf("asdasd\n"); //for dongusunun icinde bi sikinti var ama ne???.
		stack = (int *) malloc(sizeof(int) * size);
		for (int i = 0; i <= top; i++)
			stack[i] = stack2[i];

	}
}
void display() {
	if (top == -1)
		printf("Stack is Empty ! \n");
	else {
		for (int i = top; i >= 0; i--)
			printf("%d. Value is : %d\n", i + 1, stack[i]);
	}
}

int main() {
	int a;
	while (1) {
		printf(
				"1-)Add a Number in Stack\n2-)Delete Top Number in Stack\n3-)Show Stack\n4-)Exit\n");
		scanf("%d", &a);
		switch (a) {
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Invalid Number.Please Try Again!\n");
			break;
		}
	}
	return 0;
}
