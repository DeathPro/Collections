#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 

typedef struct node{
        char isim[10];
        int data;
        node * sonraki;
      
        };
        
        void ekle(node*baslangic){
        	int adet;
        
        	printf("Kac veri girilecek: ");
        	scanf("%d",&adet);
        	
        	node *temp=baslangic;
        	for(int i=0;i<adet;i++){
        		int sayi;
        		printf("not girin isim gir: ");
        		 scanf("%d %s",&sayi,temp->isim);
             	temp->data=sayi;
             	
                temp->sonraki = (node*)malloc(sizeof(node));
           
             
	            temp=temp->sonraki;
	
        	}
        	temp->sonraki=baslangic;
        
        	
        }
        
        void hesapla(node*baslangic){
        	
        	node*temp=baslangic;
       if(temp->data>=60){
        	
        		printf(" %s: %d----- Gecti\n",temp->isim,temp->data);
        		temp=temp->sonraki;
        		
        		
        	}
            
        	temp=baslangic->sonraki;
        	while(temp!=baslangic){
        	if(temp->data>=60){
        	
        		printf(" %s: %d----- Gecti\n",temp->isim,temp->data);
        		temp=temp->sonraki;
        		
        		
        	}	
        	else{
        		
        		temp=temp->sonraki;
        	}
        	
        	
        
        	
        	}
		
        	
        }
        
    
        
int main(){


	
    node * baslangic = (node * ) malloc(sizeof(node));
    
    
    ekle(baslangic);
    hesapla(baslangic);
    
    
    getch();

}
