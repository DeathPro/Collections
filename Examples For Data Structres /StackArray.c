#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int stack[MAX];
int top = -1;
void push() {
	int number;
	if (top == MAX - 1)
		printf("Stack is Overflow ! \n");
	else {
		printf("Enter a Number : ");
		scanf("%d", &number);
		top++;
		stack[top] = number;
	}
}
void pop() {
	if (top == -1)
		printf("Stack is Empty ! \n");
	else {
		printf("Number %d Has Been Deleted\n", stack[top]);
		top--;
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
