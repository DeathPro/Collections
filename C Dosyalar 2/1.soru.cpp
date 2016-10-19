
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct veri{
	
	char isim[32];
    veri *sonraki;
	
};

typedef struct veri node;
node *head;
void kayitGoster(){
	
	node *o=head;
	o = o->sonraki;
	while(o != NULL){
		
		printf("%s ",o->isim);
		o = o->sonraki;
	
	}

	printf("\n");
	
	
}

void kayit(){
	char gelenIsim[32];
	printf("Ad: ");
	scanf("%s",gelenIsim);

	node *yeniDugum,*onceki;
	onceki = head;
	yeniDugum = (node*) malloc(sizeof(node));
	
	strcpy(yeniDugum->isim, gelenIsim);
	while(1){
	
	if(onceki->sonraki == NULL){
		onceki->sonraki = yeniDugum;
		yeniDugum->sonraki = NULL;
		break;
	}else{
		
		onceki = onceki->sonraki;
	}
}
  	
}

void sil(){
	
	char silmeIsim[32];
	int sayac=0;
	printf("Ad: ");
	scanf("%s",silmeIsim);
	
	node *q = head;
	node *k = head;
	q = q->sonraki;
	while(q != NULL){
	sayac++;
	
	if(strcmp(q->isim,silmeIsim) == 0){
		break;
	}
	q = q->sonraki;
	}
	
	for(int i=1;i<sayac;i++){
		k = k->sonraki;
	}	
	if(q->sonraki == NULL){
		k->sonraki = NULL;
		free(q);
	
	}
	else{
	k->sonraki = q->sonraki;
	free(q);
	}
}	

char* enUzun(){
	char uzun[32];
	int say=0;
	node *gez = head;
	gez = gez->sonraki;
	strcpy(uzun, gez->isim);
	while(gez->sonraki != NULL){
	
		gez = gez->sonraki;
		if(strlen(gez->isim) > strlen(uzun)){
		strcpy(uzun, gez->isim);
		}	
	}
	int i=1;
	gez = head;
	while(gez->sonraki != NULL){
		gez = gez->sonraki;
		if(strlen(uzun) == strlen(gez->isim)){
			printf("En uzun isim:[%d] %s\n", i, gez->isim);
			i++;
		}
		
	}
	printf("\nDevam etmek icin bir tusa basin...");
	getch();
}


int main(){
		head = (node*) malloc(sizeof(node));
		strcpy(head->isim, " bas");
		head->sonraki = NULL;
		char sec;
		
		while(1){

		
			kayitGoster();
			
			printf("1-Ekle \n2-Sil \n3-En Uzun Isim\n4-Cikis\n");
			scanf("%d",&sec);
			
			switch(sec){
				
				case 1:
					kayit();
					break;
				case 2:
					sil();
					break;
				case 3:
					enUzun();
					break;
				case 4:
					exit(0);
					break;
				default:
					printf("Hatali tuslama yaptiniz.");
					break;
			}
			
		}
	return 0;
}

