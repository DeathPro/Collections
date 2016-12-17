/*
 * BinarySearchTree.c
 *
 *  Created on: Dec 5, 2016
 *      Author: deathpro
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *left_child;
	struct node *right_child;
};

typedef struct node node;
node *root = NULL;

int isEmpty() {
	if (root == NULL)
		return 1;
	else
		return 0;
}
void insert(int a) {
	node *temp1;
	if (isEmpty()) {
		printf("Ortalikta Bir Agac Yoktu !\n");
		root = (node *) malloc(sizeof(node));
		root->left_child = NULL;
		root->right_child = NULL;
		root->data = a;
	} else {
		temp1 = root;
		while (1) {
			if (temp1->data < a) {
				if (temp1->right_child == NULL) {
					temp1->right_child = (node *) malloc(sizeof(node));
					temp1 = temp1->right_child;
					break;
				} else
					temp1 = temp1->right_child;
			} else if (temp1->data >= a) {
				if (temp1->left_child == NULL) {
					temp1->left_child = (node *) malloc(sizeof(node));
					temp1 = temp1->left_child;
					break;
				} else
					temp1 = temp1->left_child;
			}
		}

		temp1->data = a;
		temp1->left_child = NULL;
		temp1->right_child = NULL;
		printf("%d Sayisi Basariyla Eklendi.\n", temp1->data);
	}
}
void *insertNode(node *temp1, int a) {

	temp1 = (node *) malloc(sizeof(node));
	temp1->data = a;
	temp1->left_child = NULL;
	temp1->right_child = NULL;
	return temp1;

}
void *insertRecursive(node *temp, int a) {
	if (temp == NULL)
		return insertNode(temp, a);
	else if (temp->data >= a)
		temp->left_child = insertRecursive(temp->left_child, a);
	else if (temp->data < a)
		temp->right_child = insertRecursive(temp->right_child, a);
}
void removee(int a) {

}

void search(int a) {
	node *temp1;
	temp1 = root;
	int i = 0;
	if (isEmpty())
		printf("Ortalikta Bir Agac Yok !\n");
	else {
		while (temp1->data != a) {
			//printf("aaaaa\n");
			if (temp1->data < a)
				temp1 = temp1->right_child;
			else if (temp1->data > a)
				temp1 = temp1->left_child;

			if (temp1 == NULL) {
				printf("Aradiginiz %d Degeri Bulunamadi :(\n", a);
				return;
			}
			i++;
		}
		printf("%d Bag Sonra Aradiginiz Deger %d Bulundu :)\n", i, temp1->data);

	}
}

int searchRecursive(node *temp, int a) {
	if (temp->data == a)
		return 1;
	else if (temp->data < a)
		return searchRecursive(temp->right_child, a);
	else if (temp->data > a)
		return searchRecursive(temp->left_child, a);
	else
		return 0;

}

int MaxRecursive(node *temp) {
	if (temp == NULL) {
		printf("Agac Bos !\n");
		return 0;
	} else if (temp->right_child != NULL) {
		return MaxRecursive(temp->right_child);
	} else
		return temp->data;
}

int MinRecursive(node *temp) {
	if (temp == NULL) {
		printf("Agac Bos !\n");
		return 0;
	} else if (temp->left_child != NULL)
		return MinRecursive(temp->left_child);
	else
		return temp->data;
}

int main(int argc, char **argv) {
	/*int secim, numara;
	 while (1) {
	 printf("1-)Insert\n2-)Remove\n3-)Search\n4-)Exit\n");
	 scanf("%d", &secim);
	 switch (secim) {
	 case 1:
	 printf("Eklenecek Sayiyi Giriniz : ");
	 scanf("%d", &numara);
	 insert(numara);
	 break;
	 case 2:
	 printf("Silinecek Sayiyi Giriniz : ");
	 scanf("%d", &numara);
	 removee(numara);
	 break;
	 case 3:
	 printf("Aranacak Sayiyi Giriniz : ");
	 scanf("%d", &numara);
	 search(numara);
	 break;
	 case 4:
	 exit(0);
	 default:
	 printf("Gecersiz Sayi Girdiniz ! Lutfen Tekrar Deneyiniz. \n");
	 break;
	 }
	 }
	 */

	root = insertRecursive(root, 25); //sonrakileride  root a atsam bişey olmaz çünkü sadece ilk çalıştırıldığında fonk. geriye bişey donduruyo...
	insertRecursive(root, 22);
	insertRecursive(root, 27);
	insertRecursive(root, 21);
	insertRecursive(root, 23);
	insertRecursive(root, 26);
	insertRecursive(root, 30);
	insertRecursive(root, 55);

	search(52);
	search(55);
	search(27);
	search(23);
	search(30);

	if (searchRecursive(root, 21) == 1)
		printf("21 Sayisi Bulundu :)\n");
	printf("Agactaki Minimum Degerim \n %d\n", MinRecursive(root));
	printf("Agactaki Maximum Degerim \n %d\n", MaxRecursive(root));

	return 0;
}
