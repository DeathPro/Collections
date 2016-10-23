#include <stdio.h>

int main() {

	typedef unsigned long ulong; //isim degisikligi...

	ulong i, j;

	//enum boolean{true,false}; //enum la c de olmayan veri tipi uretebilirsin....
	enum day {
		SUNDAY, MONDAY
	};
	enum boolean {
		true, false
	};
	//enum boolean = tipi
	enum boolean b = true; //enum boolean icinde sadece true ve false var. b baska deger alamaz.
	typedef enum boolean bool;
	bool a = false;
}
