#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void f(int a[]);
int findsize(char *s);

int main(void)
{
	char s[] = "Pointers are heart of the C";
	char *p = "Pointers are heart of the C"; //pointer 'in kendi boyutu 4 byte tir. Ama degisebilir
											// mesela linux'ta 8 byte windows ta 4 byte
	//printf("%s\n",p);						//hangi veri tipinde olmasi onemli degil.
											//icinde tuttugu deger 1 byte char tipinde oldugundan
	int a[3];
	double d[5];
	f(a);
	printf("sizeof(s) = %d\n",sizeof(s));
	printf("sizeof(p) = %d\n",sizeof(p));
	printf("sizeof(*p) = %d\n",sizeof(*p));
	printf("sizeof(a) = %d\n",sizeof(a));
	printf("sizeof(d) = %d\n",sizeof(d));

	printf("\n\n\n");
	printf("Sum = %d",findsize(s));

}

void f(int a[])
{
	printf("sizeof(a)in function = %d\n",sizeof(a));
}

int findsize(char *s)
{
	int sum=0;
	while(*s!=NULL)
	{
		while(*s==' ') //isspace(*s) == *s=' '
			s++;
		if(*s!='\0'){
			sum++;
			s++;
		}


	}
	return sum;
}


//int findsize(char *s)
//{
//	int i;
//	int sum=0;
//
//	for(i=0;s[i]!=NULL;i++) //bir diziyi a seklinde gosterirsem adrestir
//							// a[i] seklinde gosterirsem degerdir olur...
//	{
//		if (s[i] != ' ')
//		{
//			sum++;
//		}
//	}
//	return sum;
//}
//









