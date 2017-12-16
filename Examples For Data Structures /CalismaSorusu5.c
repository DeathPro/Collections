#include <stdio.h>

#define MAX 10

int top = -1;

int stack[MAX];
void push(int a) {
	if (top == (MAX - 1)) {
		printf("Stack Dolu ! \n");
	} else {
		top++;
		stack[top] = a;
	}
}

void display() {
	if (top == -1) {
		printf("Stack Bos ! \n");
	} else {
		printf("Stacktaki Degerler\n");
		for (int i = top; i >= 0; i--) {
			printf("%d\t", stack[i]);
		}
		printf("\n");
	}
}
void StackNegatif(int a[]) {
	for (int i = 0; i < 10; i++) {
		if (a[i] < 0)
			push(a[i]);
	}
}
int main() {
	int a[] = { 2, -10, -100, 5, 6, 7, -53, -33, 99, 86 };
//	for (int i = 0; i < 10; i++){
//		scanf("%d", &a[i]);
//	}
	StackNegatif(a);
	display();
	return 0;
}
