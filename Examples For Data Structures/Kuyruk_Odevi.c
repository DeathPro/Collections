/*	Yazar				: Muhammed Resul BİLKİL
 	Proje Konusu		: Banka Simülasyonu
 	Yazıldığı Yer		: Eclipse Mars(4.5.2)
 	Test Edildigi Yer	: Linux Ubuntu Isletim Sistemi
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>//sleep komutu icin...

//Renklendirim ki biraz eğlenceli olsun proje
#define ANSI_COLOR_RED     "\x1b[31m"
//belki diger renkleri kullanirim.
//Simdilik Kalsin...
//Eclipse de renkleri gostermiyor
//Bende Linuxtaki Konsoldan Derleyip Calistiriyorum
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define EFT 1		//Kodu okumam kolay olsun diye böylesi daha iyi
#define KrediCekme 2
#define FaturaOdeme 3
#define ParaCekme 4

struct gise {
	int ToplamMusteriSayisi;
	int ToplamMusteriyeHizmetSuresi;
	double OrtHizmetVermeSuresi;
	struct gise *Gelenmusteri;
};
typedef struct gise gise;

gise *gise1;
gise *gise2;
gise *gise3;

struct musteri {
	int MusteriNo;
	char *GisedeYaptigiIslem;
	int GisedeIslemSuresi;
	int SirayaGirmeZamani; //Bir oncekisinden sonra girme zamani
	char *GidilenGise;
	struct musteri *next;
};

typedef struct musteri musteri;

musteri *front = NULL;
musteri *rear = NULL;

int MusteriSayisi = 0;

void MusteriBelirleme() { //sanki sabah bankanin ilk acilisinda kapida 100 kisilik sira varmis gibi...
	if (front == NULL) { //ilk musterinin gelmesi...
		front = (musteri *) malloc(sizeof(musteri));
		front->GisedeIslemSuresi = rand() % 4 + 1;
		front->SirayaGirmeZamani = rand() % 5 + 1; //Bir oncekisine nazaran...
		MusteriSayisi++;
		front->MusteriNo = MusteriSayisi;
		gise1->ToplamMusteriSayisi = 0;
		gise2->ToplamMusteriSayisi = 0;
		gise3->ToplamMusteriSayisi = 0;
		gise1->ToplamMusteriyeHizmetSuresi = 0;
		gise2->ToplamMusteriyeHizmetSuresi = 0;
		gise3->ToplamMusteriyeHizmetSuresi = 0;
		gise1->OrtHizmetVermeSuresi = 0;
		gise2->OrtHizmetVermeSuresi = 0;
		gise3->OrtHizmetVermeSuresi = 0;
		rear = front;

		if (front->GisedeIslemSuresi == 1) //rastgele belirlenen islem turlerini belirtiyorum...
			front->GisedeYaptigiIslem = "EFT";
		else if (front->GisedeIslemSuresi == 2)
			front->GisedeYaptigiIslem = "Kredi Cekme";
		else if (front->GisedeIslemSuresi == 3)
			front->GisedeYaptigiIslem = "Fatura Odeme";
		else if (front->GisedeIslemSuresi == 4)
			front->GisedeYaptigiIslem = "Para Cekme";

		if (front->GisedeIslemSuresi == EFT) //belirlenen islem turunde rastgele islem suresi atiyorum...
			front->GisedeIslemSuresi = rand() % 8 + 3; //3 - 10
		else if (front->GisedeIslemSuresi == KrediCekme)
			front->GisedeIslemSuresi = rand() % 11 + 10; //10 - 20
		else if (front->GisedeIslemSuresi == FaturaOdeme)
			front->GisedeIslemSuresi = rand() % 11 + 2; //2 - 12
		else if (front->GisedeIslemSuresi == ParaCekme)
			front->GisedeIslemSuresi = rand() % 7 + 1; //1 - 7
	} else {
		rear->next = (musteri *) malloc(sizeof(musteri));
		rear = rear->next;
		rear->GisedeIslemSuresi = rand() % 4 + 1;
		rear->SirayaGirmeZamani = rand() % 5 + 1; //Bir oncekisine nazaran...
		MusteriSayisi++;
		rear->MusteriNo = MusteriSayisi;

		if (rear->GisedeIslemSuresi == 1) //rastgele belirlenen islem turlerini belirtiyorum...
			rear->GisedeYaptigiIslem = "EFT";
		else if (rear->GisedeIslemSuresi == 2)
			rear->GisedeYaptigiIslem = "Kredi Cekme";
		else if (rear->GisedeIslemSuresi == 3)
			rear->GisedeYaptigiIslem = "Fatura Odeme";
		else if (rear->GisedeIslemSuresi == 4)
			rear->GisedeYaptigiIslem = "Para Cekme";

		if (rear->GisedeIslemSuresi == EFT)	//belirlenen islem turunde rastgele islem suresi atiyorum...
			rear->GisedeIslemSuresi = rand() % 8 + 3; //3 - 10
		else if (rear->GisedeIslemSuresi == KrediCekme)
			rear->GisedeIslemSuresi = rand() % 11 + 10; //10 - 20
		else if (rear->GisedeIslemSuresi == FaturaOdeme)
			rear->GisedeIslemSuresi = rand() % 11 + 2; //2 - 12
		else if (rear->GisedeIslemSuresi == ParaCekme)
			rear->GisedeIslemSuresi = rand() % 7 + 1; //1 - 7

		rear->next = NULL;
	}
}
musteri *MinimumSure(musteri *a, musteri *b, musteri *c) { //en kucuk degere sahip olani dondurecek ki o kisiyi siradan cikartabileyim...
	if (a->GisedeIslemSuresi < b->GisedeIslemSuresi
			&& a->GisedeIslemSuresi < c->GisedeIslemSuresi)
		return a; //en kucuk gisede islem suresi olan musteri
	else if (b->GisedeIslemSuresi < a->GisedeIslemSuresi
			&& b->GisedeIslemSuresi < c->GisedeIslemSuresi)
		return b;
	else if (c->GisedeIslemSuresi < a->GisedeIslemSuresi
			&& c->GisedeIslemSuresi < b->GisedeIslemSuresi)
		return c;
	else {
		printf(
		ANSI_COLOR_RED "Degerler Ayni :D:D:D\n"
		ANSI_COLOR_RESET); //inş degerler ayni olmaz :D Malesef oluyo.Bu sıkıntı Çözülmeliiii.... Çözdüm :D
		//Eger minimum degerler ayniysa demek oluyo ki 3 ü de ayni anda cikacaklar bankadan.
		printf(
				"\t%d Nolu Musterinin\n" ANSI_COLOR_GREEN "Siraya Girme Zamani : %d\n" ANSI_COLOR_BLUE "Girdigi Gise : %s\n" ANSI_COLOR_CYAN "Gisede Islem Suresi : %d\n"
				ANSI_COLOR_RESET, a->MusteriNo, a->SirayaGirmeZamani,
				a->GidilenGise, a->GisedeIslemSuresi);
		printf(
				"\t%d Nolu Musterinin\n" ANSI_COLOR_GREEN "Siraya Girme Zamani : %d\n" ANSI_COLOR_BLUE "Girdigi Gise : %s\n" ANSI_COLOR_CYAN "Gisede Islem Suresi : %d\n"
				ANSI_COLOR_RESET, b->MusteriNo, b->SirayaGirmeZamani,
				b->GidilenGise, b->GisedeIslemSuresi);
		printf(
				"\t%d Nolu Musterinin\n" ANSI_COLOR_GREEN "Siraya Girme Zamani : %d\n" ANSI_COLOR_BLUE "Girdigi Gise : %s\n" ANSI_COLOR_CYAN "Gisede Islem Suresi : %d\n"
				ANSI_COLOR_RESET, c->MusteriNo, c->SirayaGirmeZamani,
				c->GidilenGise, c->GisedeIslemSuresi);

		free(a); //Müşterileri Bankadan Çıkarttım ....
		free(b);
		free(c);

		gise1->Gelenmusteri = NULL;//ne olur ne olmaz :D
		gise2->Gelenmusteri = NULL;
		gise3->Gelenmusteri = NULL;

		//gise de musteri yok.Bundan dolayi
		//bir sonraki musteriyi giseye yolluyorum...
		gise1->Gelenmusteri = front;
		gise1->ToplamMusteriSayisi++;
		gise1->ToplamMusteriyeHizmetSuresi += front->GisedeIslemSuresi;
		front->GidilenGise = "Gise 1";
		front = front->next; //frontu ilerletmemle bu musteriyi kaybetmiyorum
		//cunku artik gise1->Gelenmusteri pointeri musteriyi gosteriyo...

		gise2->Gelenmusteri = front;
		gise2->ToplamMusteriSayisi++;
		gise2->ToplamMusteriyeHizmetSuresi += front->GisedeIslemSuresi;
		front->GidilenGise = "Gise 2";
		front = front->next;

		gise3->Gelenmusteri = front;
		gise3->ToplamMusteriSayisi++;
		gise3->ToplamMusteriyeHizmetSuresi += front->GisedeIslemSuresi;
		front->GidilenGise = "Gise 3";
		front = front->next;

		return MinimumSure(gise1->Gelenmusteri, gise2->Gelenmusteri,
				gise3->Gelenmusteri);
	}
	//3'u ayni degere sahip oldugunda ucununde ayni anda bankadan cikiyolar...

}
void MusteriSirasi() {

	if (gise1->Gelenmusteri == NULL) { //gise de musteri yoksa bir sonraki musteriyi giseye yolluyorum...
		gise1->Gelenmusteri = front;
		gise1->ToplamMusteriSayisi++;
		gise1->ToplamMusteriyeHizmetSuresi += front->GisedeIslemSuresi;
		front->GidilenGise = "Gise 1";
		front = front->next; //frontu ilerletmemle bu musteriyi kaybetmiyorum
		//cunku artik gise1->Gelenmusteri  pointeri musteriyi gosteriyo...
	}
	if (gise2->Gelenmusteri == NULL) {
		gise2->Gelenmusteri = front;
		gise2->ToplamMusteriSayisi++;
		gise2->ToplamMusteriyeHizmetSuresi += front->GisedeIslemSuresi;
		front->GidilenGise = "Gise 2";
		front = front->next;
	}
	if (gise3->Gelenmusteri == NULL) {
		gise3->Gelenmusteri = front;
		gise3->ToplamMusteriSayisi++;
		gise3->ToplamMusteriyeHizmetSuresi += front->GisedeIslemSuresi;
		front->GidilenGise = "Gise 3";
		front = front->next;
	}

	musteri *donengise = MinimumSure(gise1->Gelenmusteri, gise2->Gelenmusteri,
			gise3->Gelenmusteri);//suresi en az olan musterinin dugumunu donduruyor...
	//ilk bankadan cikan o olacak ..
	int i = donengise->GisedeIslemSuresi;
	musteri *gise1dekimusteri = gise1->Gelenmusteri;
	musteri *gise2dekimusteri = gise2->Gelenmusteri;
	musteri *gise3dekimusteri = gise3->Gelenmusteri;
	//boyle yaptim cunku nedense gise1->Gelenmusteri bunun gosterdigi dugum ile
	//islem yapamiyorum nedense gormedi sanirsam eclipse de bi sikinti var yada baska bisey
	//sıkıntı yok bu sekilde hallettim...

	//bekleme(i);//Simdilik Calistirmiyorum bekleme komutunu ...

	//Cikan Musterinin Bilgileri...
	printf(
			"\t%d Nolu Musterinin\n" ANSI_COLOR_GREEN "Siraya Girme Zamani : %d\n" ANSI_COLOR_BLUE "Girdigi Gise : %s\n" ANSI_COLOR_CYAN "Gisede Islem Suresi : %d\n"
			ANSI_COLOR_RESET, donengise->MusteriNo,
			donengise->SirayaGirmeZamani, donengise->GidilenGise,
			donengise->GisedeIslemSuresi);
	//Ekran çıktısında buradaki gise islem sureleri dusuk cikiyo neden mi
	//Çünkü assagida azaltiyoruz ve bankadan cikarken gosterilen islem süresi degeri onceden cikan musterilerin
	//islem surelerinin bundan cikartildigindan dolayi az görülüyor yoksa mantık doğru
	//Sadece ilk musterinin islem süresi dogru gozukuyo. sonrakilerde cikan musterilerin süreleri
	//cikartildigindan az gözüküyo.

	//eger gelenmusterinin islem süresini azaltmassam sıkıntı mesela
	//20 dk olsun gise3 teski musteri nasil cikacak. Bidaha minimum sure secilemicek cunku donebilecek en buyuk deger o
	//o yuzden azaltmam lazim ki zaten mantikli olan o...
	if (donengise == gise1->Gelenmusteri) {
		//Eger en az süreye sahip olan musterim gise1 deki ise...
		//donengise en kucuk sureye sahip olan musteri
		//ayni zamanda bankadan ilk cikacak olan kisidir.
		//o anda gisede olan diger musterilerin
		//suresini cikan musterinin islem suresi kadar azaltmam gerek...
		gise2dekimusteri->GisedeIslemSuresi -= i;
		gise3dekimusteri->GisedeIslemSuresi -= i;
		gise1->Gelenmusteri = NULL;
		free(donengise);
	}

	if (donengise == gise2->Gelenmusteri) {
		gise1dekimusteri->GisedeIslemSuresi -= i;
		gise3dekimusteri->GisedeIslemSuresi -= i;
		gise2->Gelenmusteri = NULL;
		free(donengise);
	}

	if (donengise == gise3->Gelenmusteri) {
		gise1dekimusteri->GisedeIslemSuresi -= i;
		gise2dekimusteri->GisedeIslemSuresi -= i;
		gise3->Gelenmusteri = NULL;
		free(donengise);
	}

}
void bekleme(int a) {
	//usleep(a);//bu mikrosaniyeyle islem yapiyo alttaki saniye ile ....
	sleep(a);	// a saniye kadar calismasi duracak programin...
	//dakika kadar beklenilecekse o zaman a 60 la carpilir sonra sleep komutu calistirilir :)
}

void GiseBilgileri() {
	gise1->OrtHizmetVermeSuresi = (double) gise1->ToplamMusteriyeHizmetSuresi//cast islemini es geçmeyelim. Cünkü 2 degerde int eger biri double olsaydi gerek kalmazdi ...
	/ gise1->ToplamMusteriSayisi;
	gise2->OrtHizmetVermeSuresi = (double) gise2->ToplamMusteriyeHizmetSuresi
			/ gise2->ToplamMusteriSayisi;
	gise3->OrtHizmetVermeSuresi = (double) gise3->ToplamMusteriyeHizmetSuresi
			/ gise3->ToplamMusteriSayisi;

	printf("\n\n");

	printf(
			ANSI_COLOR_RED "\t1. Gisenin Bilgileri \n" ANSI_COLOR_BLUE "Toplam Musteri Sayisi : %d\n" ANSI_COLOR_GREEN "Toplam Musteriye Hizmet Suresi : %d\n"
			ANSI_COLOR_CYAN "Ortalama Hizmet Verme Süresi : %.2lf\n\n" ANSI_COLOR_RESET,
			gise1->ToplamMusteriSayisi, gise1->ToplamMusteriyeHizmetSuresi,
			gise1->OrtHizmetVermeSuresi);

	printf(
			ANSI_COLOR_RED "\t2. Gisenin Bilgileri \n" ANSI_COLOR_BLUE "Toplam Musteri Sayisi : %d\n" ANSI_COLOR_GREEN "Toplam Musteriye Hizmet Suresi : %d\n"
			ANSI_COLOR_CYAN "Ortalama Hizmet Verme Süresi : %.2lf\n\n" ANSI_COLOR_RESET,
			gise2->ToplamMusteriSayisi, gise2->ToplamMusteriyeHizmetSuresi,
			gise2->OrtHizmetVermeSuresi);

	printf(
			ANSI_COLOR_RED "\t3. Gisenin Bilgileri \n" ANSI_COLOR_BLUE "Toplam Musteri Sayisi : %d\n" ANSI_COLOR_GREEN "Toplam Musteriye Hizmet Suresi : %d\n"
			ANSI_COLOR_CYAN "Ortalama Hizmet Verme Süresi : %.2lf\n\n" ANSI_COLOR_RESET,
			gise3->ToplamMusteriSayisi, gise3->ToplamMusteriyeHizmetSuresi,
			gise3->OrtHizmetVermeSuresi);
}

int main(int argc, char **argv) {

	srand(time(NULL));

	gise1 = (gise*) malloc(sizeof(gise));
	gise2 = (gise*) malloc(sizeof(gise));
	gise3 = (gise*) malloc(sizeof(gise));

	int k;

	for (k = 0; k < 100; k++) {	//100 musterim.. Aksama kadar anca isleri bitiyo
		//tam 101. musteri gircek bankaya amaaaa saat olmuş 17.00 daha ne müşterisi  ....
		MusteriBelirleme();
	}
	musteri *gidici;
	gidici = front;
	while (gidici != NULL) {
		printf(
				"%d Nolu Musterinin Bilgileri\n" ANSI_COLOR_GREEN "Gisedeki Islemi : %s\n" ANSI_COLOR_BLUE "Gisede Islem Suresi : %d\n"
				ANSI_COLOR_CYAN "Siraya Girme Zamani : %d\n\n"
				ANSI_COLOR_RESET, gidici->MusteriNo, gidici->GisedeYaptigiIslem,
				gidici->GisedeIslemSuresi, gidici->SirayaGirmeZamani);
		gidici = gidici->next;
	}

	printf( ANSI_COLOR_RED "Banka Aciliyoooooo !!!\n\n\n" ANSI_COLOR_RESET);

	while (front != NULL) {
		MusteriSirasi();
	}
	//herhangi bir zamanda kuyrukta bekleyen müşteri sayısı :(

	//kuyrukta en uzun süre bekleyen müşterinin bekleme süresi ->  Benim bu yazdigim kodda siradaki en sonuncu adam :)

	//bir müşterinin kuyrukta ortalama bekleme süresi -> giselerdeki toplam islem süresini musteri saysina bolucem.

	double j = 0;
	j = (double) (gise1->ToplamMusteriyeHizmetSuresi + gise2->ToplamMusteriyeHizmetSuresi
			+ gise3->ToplamMusteriyeHizmetSuresi) / MusteriSayisi;

	printf(
			ANSI_COLOR_CYAN "\n\nBir Müşterinin Kuyrukta Ortalama Bekleme Süresi : %.2lf\n" ANSI_COLOR_RESET,
			j);

	GiseBilgileri();

	return 0;
}
