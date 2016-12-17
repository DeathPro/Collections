//Kendin calis bu biraz karisik...
#include <stdio.h>
#include <stdlib.h>

int id = 0;

typedef struct node {
	int data;
	int id;
	struct node *next;
} node;

node *insertNode(int data, node *head) {
	node *temp;
	node *ptr; //*ptr=head;
	ptr = head;
	temp = malloc(sizeof(node));
	if (head == NULL) {
		temp->data = data;
		temp->id = ++id;
		temp->next = NULL;
		head = temp;
		return head;
	} else {
		temp->data = data;
		temp->id = ++id;
		temp->next = head;
		head = temp;
		return head;
	}

}
void writeLinkedList(node *head) {

	while (head != NULL) {
		printf("id : %3d data : %3d\n", head->id, head->data);
		head = head->next;
	}
}
void writeLinkedListRecursively(node *head) {
	if (head == NULL)
		return;
	writeLinkedListRecursively(head->next);
	printf("id : %3d data : %3d\n", head->id, head->data);
	//writeLinkedListRecursively(head->next);
}
node *deleteNode(int key, node *head) {
	int tempid, tempdata;
	node *ptr = head;
	node *prior = NULL;
	while (ptr != NULL) {
		if (ptr->id == key) {
			if (ptr == head) {
				tempid = ptr->id;
				tempdata = ptr->data;
				head = head->next;
				free(ptr);
			} else {
				tempid = ptr->id;
				tempdata = ptr->data;
				prior->next = ptr->next;
			}
			printf("Id %d Deleted", tempid);
			break;
		}
		prior = ptr;
		ptr = ptr->next;
	}
	return head;

}

int main() {
	node *head;
	head = insertNode(5, head);
	head = insertNode(10, head);
	head = insertNode(15, head);

	writeLinkedList(head);
	printf("\n\n");
	writeLinkedListRecursively(head);

	return 0;

}
