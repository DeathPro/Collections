/*
 * BinarySearchTree2.c
 *
 *  Created on: Jan 5, 2017
 *      Author: deathpro
 */

#include <stdio.h>
#include <stdlib.h>

struct queue {
	struct queue *gecici;
	struct queue *next;
};

typedef struct queue queue;

queue *front = NULL;
queue *rear = NULL;

struct node {
	int data;
	int height;
	struct node *leftc;
	struct node *rightc;
};

typedef struct node node;

node *root = NULL;
void push(node *temp) {
	if (front == NULL) {
		front = (queue*) malloc(sizeof(node));
		front->gecici = temp;
		rear = front;
		front->next = NULL;
	} else {
		rear->next = (queue*) malloc(sizeof(node));
		rear = rear->next;
		rear->gecici = temp;
		rear->next = NULL;
	}
}
void pop() {
	queue *temp;
	if (front == NULL)
		printf("Cikartilacak Bisey Yok ! \n");
	else if (front == rear) {
		temp = front;
		front = rear = NULL;
		free(temp);
	} else {
		temp = front;
		front = front->next;
		free(temp);
	}
}
int isEmpty() {
	if (root == NULL)
		return 1;
	else
		return 0;
}

void insert(int numara) {
	node *temp;
	if (isEmpty()) {
		printf("Ortada Bir Agac Yoktu !\n");
		root = (node *) malloc(sizeof(node));
		root->data = numara;
		root->leftc = root->rightc = NULL;
		printf("%d Numarasi Basariyla Eklendi :)\n", root->data);
	} else {
		temp = root;
		while (1) {
			if (numara > temp->data) {
				if (temp->rightc == NULL) {
					temp->rightc = (node *) malloc(sizeof(node));
					temp = temp->rightc;
					temp->data = numara;
					temp->rightc = temp->leftc = NULL;
					break;
				} else {
					temp = temp->rightc;
				}
			} else if (numara <= temp->data) {
				if (temp->leftc == NULL) {
					temp->leftc = (node *) malloc(sizeof(node));
					temp = temp->leftc;
					temp->data = numara;
					temp->leftc = temp->rightc = NULL;
					break;
				} else {
					temp = temp->leftc;
				}
			}
		}
		printf("%d Numarasi Basariyla Eklendi :)\n", temp->data);
	}
}

void *insertNode(node *temp, int numara) {
	if (temp == root) {
		root = (node *) malloc(sizeof(node));
		root->data = numara;
		root->leftc = root->rightc = NULL;
		return root;
	}
	temp = (node *) malloc(sizeof(node));
	temp->data = numara;
	temp->leftc = temp->rightc = NULL;
	return temp;
}

void *insertRecursive(node *temp, int numara) {
	if (temp == NULL)
		return insertNode(temp, numara);
	else if (numara > temp->data)
		temp->rightc = insertRecursive(temp->rightc, numara);
	else if (numara <= temp->data)
		temp->leftc = insertRecursive(temp->leftc, numara);
}

void search(int numara) {
	node *temp;
	int i = 0;
	if (isEmpty()) {
		printf("Ortada Bir Agac Yok !\n");
	} else {
		temp = root;
		while (temp != NULL) {
			if (numara > temp->data)
				temp = temp->rightc;
			else if (numara < temp->data)
				temp = temp->leftc;
			else if (numara == temp->data) {
				printf("%d Sayisi %d Bag Sonra Bulundu :)\n", temp->data, i);
				return;
			}
			i++;
		}
		printf(
				"Aradiginiz %d Degeri Agacta Yok :( Lutfen Tekrar Deneyiniz ! \n",
				numara);
	}
}

int searchRecursive(node *temp, int numara) {
	if (temp == NULL) //hem agac bossa hemde agacta o eleman yoksa eger -1 geri dondurur.
		return -1;
	else if (numara > temp->data)
		return searchRecursive(temp->rightc, numara);
	else if (numara < temp->data)
		return searchRecursive(temp->leftc, numara);
	else
		return numara;
}

int MinRecursive(node *temp) {
	//eger burda int * seklinde fonk. tanimlayip sonra temp i geri dondurursen
	//main e donen MinRecursive den temp in datasina ulasamassin.
	//ulasmak istiyosan o sekilde node * seklinde tanimlamalisin fonksiyonu.
	//node tipindeki bir struct'in verilerine ancak node tipinde bir pointer
	//ulasir....
	if (temp == NULL) { //root null sa yani
		printf("Ortalikta Agac Yok !\n");
		return 0;
	} else if (temp->leftc != NULL)
		return MinRecursive(temp->leftc);
	else
		return temp->data;
}
int MaxRecursive(node *temp) {
	if (temp == NULL) {
		printf("Ortalikta Agac Yok !\n");
		return 0;
	} else if (temp->rightc != NULL)
		return MaxRecursive(temp->rightc);
	else
		return temp->data;
}

int Max(int left_height, int right_height) {
	if (left_height > right_height)
		return left_height;
	else if (right_height > left_height)
		return right_height;
	else
		return right_height; //return left_height; de olur çünkü 2 si eşit durumu oluyo en son
}

int FindHeight(node *temp) { //mantigi biraz zor ...
	int leftHeight, rightHeight;
	if (temp == NULL)
		return -1;
	leftHeight = FindHeight(temp->leftc);
	rightHeight = FindHeight(temp->rightc);
	return Max(leftHeight, rightHeight) + 1;
}

void PreOrder(node *temp) {
	if (temp == NULL)
		return;
	printf("%d ", temp->data);
	PreOrder(temp->leftc);
	PreOrder(temp->rightc);
}
void InOrder(node *temp) { //Sirali Bir Agac Sunar Bizlere....
	if (temp == NULL)
		return;
	InOrder(temp->leftc);
	printf("%d ", temp->data);
	InOrder(temp->rightc);
}
void PostOrder(node *temp) {
	if (temp == NULL)
		return;
	PostOrder(temp->leftc);
	PostOrder(temp->rightc);
	printf("%d ", temp->data);
}

void LevelOrder(node *temp) {
	node *current;
	if (temp == NULL) {
		printf("\nOrtada Bir Agac Yok !\n");
		return;
	} else {
		push(temp);
		while (front != NULL) {
			current = front->gecici;
			printf("%d ", current->data);
			if (current->leftc != NULL)
				push(current->leftc);
			if (current->rightc != NULL)
				push(current->rightc);
			pop();
		}
	}
	printf("\nLevel - Level Agac Yazimi Bitti\n");
}

node *FindMin(node *temp) {
	if (temp == NULL) {
		printf("Ortalikta Agac Yok !\n");
		return 0;
	} else if (temp->leftc != NULL)
		return FindMin(temp->leftc);
	else
		return temp;
}

node *Delete(node *temp, int numara) {
	node *gecici;
	if (temp == NULL) {
		printf("Ortalikta Agac Yok !\n");
		return temp; // NULL desemde olur cunku zaten if e girerken temp in null oldugu belli oluyor...
	} else if (numara > temp->data)
		temp->rightc = Delete(temp->rightc, numara);
	else if (numara < temp->data)
		temp->leftc = Delete(temp->leftc, numara);
	else {
		// Durum 1: Cocuk Yoksa
		if (temp->leftc == NULL && temp->rightc == NULL) {
			gecici = temp;
			free(gecici);
			if (temp == root)
				root = NULL;
			else
				temp = NULL;
		}
		// Durum 2: 1 Cocuk Varsa
		else if (temp->leftc == NULL) {
			gecici = temp;
			temp = temp->rightc;
			free(gecici);
		} else if (temp->rightc == NULL) {
			gecici = temp;
			temp = temp->leftc;
			free(gecici);
		} else {
			//Durum 3: 2 Cocuk Varsa
			gecici = FindMin(temp->rightc);
			temp->data = gecici->data;
			temp->rightc = Delete(temp->rightc, temp->data);
		}
	}
	return temp;
}

node *searchTekrarli(node *temp, int numara) {
	if (temp == NULL)
		return temp;
	else if (numara > temp->data)
		return searchTekrarli(temp->rightc, numara);
	else if (numara < temp->data)
		return searchTekrarli(temp->leftc, numara);
	else
		return temp;
}

node *LeftRotation(node *temp) {
	node *gecici = temp->rightc;
	temp->rightc = gecici->leftc;
	gecici->leftc = temp;
	temp->height = FindHeight(temp);
	gecici->height = FindHeight(gecici);
	return gecici;
}

node *RightRotation(node *temp) {
	node *gecici = temp->leftc;
	temp->leftc = gecici->rightc;
	gecici->rightc = temp;
	temp->height = FindHeight(temp);
	gecici->height = FindHeight(gecici);
	return gecici;
}

node *LeftRightRotation(node *temp) {
	temp->leftc = LeftRotation(temp->leftc);
	return RightRotation(temp);
}

node *RightLeftRotation(node *temp) {
	temp->rightc = RightRotation(temp->rightc);
	return LeftRotation(temp);
}

int LeafNode(node *temp) {
	if (temp == NULL)
		return 0;
	if (temp->rightc == NULL && temp->leftc == NULL)
		return 1;
	else
		return LeafNode(temp->leftc) + LeafNode(temp->rightc);
}

int size(node *temp) {
	if (temp == NULL)
		return 0;
	else
		return (size(temp->leftc) + size(temp->rightc) + 1);
}
void FindBalance(node *temp) {
	int lefth = 0;
	int righth = 0;
	int result = 0;
	lefth = FindHeight(temp->leftc);
	righth = FindHeight(temp->rightc);

	if (Max(lefth, righth) == lefth)
		result = lefth - righth;
	else
		result = righth - lefth;

	if (result == 0)
		printf("Agac Bir Perfect Tree dir !\n");
	else if (result <= 1)
		printf("Agac Bir AVL Agactir !\n");
	else
		printf("Agac Dengeli Bir Agac Degildir !\n");
}

int main(int argc, char **argv) {
	int secim, numara;
	while (1) {
		printf(
				"\n1-)Insert\n2-)InsertRecursive\n3-)Delete\n4-)Search\n5-)SearchRecursive\n6-)MinRecursive\n7-)MaxRecursive\n"
						"8-)FindHeight\n9-)PreOrder\n10-)InOrder\n11-)PostOrder\n12-)LevelOrder\n13-)LeftRotation\n14-)RightRotation\n15-)LeftRightRotation\n"
						"16-)RightLeftRotation\n17-)Total Number of Leaf Node\n18-)Total Number of Node\n19-)Balance\n20-)Exit\n");
		scanf("%d", &secim);
		switch (secim) {
		case 1:
			printf("Eklenecek Sayiyi Giriniz : ");
			scanf("%d", &numara);
			insert(numara);
			break;
		case 2:
			printf("Eklenecek Sayiyi Giriniz : ");
			scanf("%d", &numara);
			insertRecursive(root, numara);
			break;
		case 3:
			printf("Silinecek Sayiyi Giriniz : ");
			scanf("%d", &numara);
			Delete(root, numara);
			break;
		case 4:
			printf("Aranacak Sayiyi Giriniz : ");
			scanf("%d", &numara);
			search(numara);
			break;
		case 5:
			printf("Recursive Seklinde Aranacak Sayiyi Giriniz : ");
			scanf("%d", &numara);
			printf("Bulunan Deger : %d\n", searchRecursive(root, numara));
			break;
		case 6:
			printf("Agactaki Minimum Deger : %d\n", MinRecursive(root));
			break;
		case 7:
			printf("Agactaki Maximum Deger : %d\n", MaxRecursive(root));
			break;
		case 8:
			printf("Agacin Maximum Yuksekligi : %d\n", FindHeight(root));
			break;
		case 9:
			PreOrder(root);
			break;
		case 10:
			InOrder(root);
			break;
		case 11:
			PostOrder(root);
			break;
		case 12:
			LevelOrder(root);
			break;
		case 13:
			printf("Left Rotation Yapilacak Dugum Verisini Giriniz : ");
			scanf("%d", &numara);
			printf("Aranacak Sayi : %d\n", searchTekrarli(root, numara)->data);
			root = LeftRotation(searchTekrarli(root, numara));
			//!!!!!!!!!!!!!!!!!!!!
			//root degisiyo bu avl islemlerinde sakin kacirma !!!!!!!!!
			break;
		case 14:
			printf("Right Rotation Yapilacak Dugum Verisini Giriniz : ");
			scanf("%d", &numara);
			root = RightRotation(searchTekrarli(root, numara));
			break;
		case 15:
			printf("Left-Right Rotation Yapilacak Dugum Verisini Giriniz : ");
			scanf("%d", &numara);
			root = LeftRightRotation(searchTekrarli(root, numara));
			break;
		case 16:
			printf("Right-Left Rotation Yapilacak Dugum Verisini Giriniz : ");
			scanf("%d", &numara);
			root = RightLeftRotation(searchTekrarli(root, numara));
			break;
		case 17:
			printf("Agactaki Toplam Yaprak Sayisi : %d\n", LeafNode(root));
			break;
		case 18:
			printf("Agactaki Toplam Dugum Sayisi : %d\n", size(root));
			break;
		case 19:
			FindBalance(root);
			break;
		case 20:
			exit(0);
		default:
			printf("Gecersiz Sayi Girdiniz ! Lutfen Tekrar Deneyiniz. \n");
			break;
		}
	}
	return 0;
}
