#include <stdio.h>

struct student
{
	int sequence;
	char *name;
	char *surname;
	char *number;
};//mainin icinde s yazmak yerinde burada }s; yazilabilir.

int main()
{
	char *p;
	struct student s;
	s.sequence=1;
	s.name="Ali";
	printf("%s",s.name);
	p="asd";
	printf("\n%c",*(p+1));
	//*p="asd"; 		Yanlıs gosterim.. Cunku pointer a ilk once bi adres atanir.pointer
	//adres tutar.adresten degere ulasır....

}
