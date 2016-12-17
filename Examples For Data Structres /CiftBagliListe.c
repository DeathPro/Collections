#include <stdio.h>
#include <stdlib.h>

int count = 0;
struct grade {

	int courseid;
	int count;
	int number;
	double vize;
	double final;
	double butunleme;
	struct grade *next;
	struct grade *prev;
};

typedef struct grade node;

node *head;
node *temp;
node *temp5;
void CreateList() {
	node *temp1;

	if (head == NULL) {
		head = (node *) malloc(sizeof(node));
		printf("Enter Student Number : ");
		scanf("%d", &head->number);
		printf("Enter CourseId : ");
		scanf("%d", &head->courseid);
		printf("Enter Student's Vize : ");
		scanf("%lf", &head->vize);
		printf("Enter Student's Final : ");
		scanf("%lf", &head->final);
		printf("Enter Student's Butunleme : ");
		scanf("%lf", &head->butunleme);
		temp = head;
		temp5 = head;
		head->next = NULL;
		head->prev = NULL;
	} else {
		temp->next = (node *) malloc(sizeof(node));
		temp = temp->next;
		printf("Enter Student Number : ");
		scanf("%d", &temp->number);
		printf("Enter CourseId : ");
		scanf("%d", &temp->courseid);
		printf("Enter Student's Vize : ");
		scanf("%lf", &temp->vize);
		printf("Enter Student's Final : ");
		scanf("%lf", &temp->final);
		printf("Enter Student's Butunleme : ");
		scanf("%lf", &temp->butunleme);

		temp->next = NULL;
		temp->prev = temp5;
		temp5 = temp5->next;
	}
	temp1 = head;
	count = 0;
	while (temp1 != NULL) {
		count++;
		temp1->count = count;
		temp1 = temp1->next;

	}
}

void DisplayList() {
	node *temp1;
	temp1 = head;
	while (temp1 != NULL) {
		printf(
				"Count : %d\nNumber : %d\nCourseId : %d\nVize : %.2lf\nFinal : %.2lf\nButunleme : %.2lf\n",
				temp1->count, temp1->number, temp1->courseid, temp1->vize,
				temp1->final, temp1->butunleme);
		temp1 = temp1->next;
	}

//	node *temp1;
//	temp1 = head;
//	while (temp1->next != NULL)
//		temp1 = temp1->next;
//	while (temp1 != NULL) {
//		printf(
//				"Count : %d\nNumber : %d\nCourseId : %d\nVize : %.2lf\nFinal : %.2lf\nButunleme : %.2lf\n",
//				temp1->count, temp1->number, temp1->courseid, temp1->vize,
//				temp1->final, temp1->butunleme);
//		temp1 = temp1->prev;
//	}
	//burda gercekten de cift bagli liste olmusmu ondan dolayi sondan basa dogru yazdirdim...

}
void InsertList() {
	node *temp1 = NULL;
	node *temp2 = NULL;
	node *temp3 = NULL;
	int a;
	int b = 0;
	printf(
			"Where Do You Want to Insert List ?(Please Enter a Student Number and If You Want to Add Last of List Please Enter (-1)) \n");
	scanf("%d", &a);
	temp1 = head;
	temp3 = head;
	if (a != -1) {
		while (temp3 != NULL) {
			if (temp3->number == a)
				b++;
			temp3 = temp3->next;
		}
		if (b == 0) {
			printf("%d Student's Number Doesn't Exist.\n", a);
			return;
		}
		b = 0;
	}
	while (temp1 != NULL) {
		if (a == head->number) { //basa ekleme

			temp2 = (node *) malloc(sizeof(node));

			printf("Enter Student Number : ");
			scanf("%d", &temp2->number);
			printf("Enter CourseId : ");
			scanf("%d", &temp2->courseid);
			printf("Enter Student's Vize : ");
			scanf("%lf", &temp2->vize);
			printf("Enter Student's Final : ");
			scanf("%lf", &temp2->final);
			printf("Enter Student's Butunleme : ");
			scanf("%lf", &temp2->butunleme);
			temp2->next = head;
			temp2->prev = NULL;
			head->prev = temp2;
			head = temp2;
			b++;
			break;

		} else if (temp1->next->number == a) { //Araya ekleme
			temp2 = (node *) malloc(sizeof(node));

			printf("Enter Student Number : ");
			scanf("%d", &temp2->number);
			printf("Enter CourseId : ");
			scanf("%d", &temp2->courseid);
			printf("Enter Student's Vize : ");
			scanf("%lf", &temp2->vize);
			printf("Enter Student's Final : ");
			scanf("%lf", &temp2->final);
			printf("Enter Student's Butunleme : ");
			scanf("%lf", &temp2->butunleme);
			temp1->next->prev = temp2;
			temp2->prev = temp1;
			temp2->next = temp1->next;
			temp1->next = temp2;
			b++;
			break;
		} else if (a == -1) //sona ekleme
				{
			while (temp1->next != NULL)
				temp1 = temp1->next;

			temp2 = (node *) malloc(sizeof(node));
			printf("Enter Student Number : ");
			scanf("%d", &temp2->number);
			printf("Enter CourseId : ");
			scanf("%d", &temp2->courseid);
			printf("Enter Student's Vize : ");
			scanf("%lf", &temp2->vize);
			printf("Enter Student's Final : ");
			scanf("%lf", &temp2->final);
			printf("Enter Student's Butunleme : ");
			scanf("%lf", &temp2->butunleme);
			temp1->next = temp2;
			temp2->prev = temp1;
			temp2->next = NULL;
			b++;
			break;
		}

		temp1 = temp1->next;
	}
	if (b != 0) //b illaki 0 a esit olmicak cunki ustte tarattim aldigim hatadan dolayi.Yani buraya if koymasamda olur ama daha kolay anlamak icin dursun.
		printf("Mission Accomplised.\n");

	temp3 = head;
	count = 0;

	while (temp3 != NULL) {
		count++;
		temp3->count = count;
		temp3 = temp3->next;

	}

}
void DeleteList() {
	node *temp1 = NULL;
	node *temp2 = NULL;
	node *temp3 = NULL;
	int a;
	int b = 0;
	printf(
			"Which Do You Want to Delete Student ? (Please Enter a Student Number) \n");
	scanf("%d", &a);
	temp3 = head;
	while (temp3 != NULL) { //burda listede olmayan bi numara girdigimde temp2 hafizada gosterilmeyecek yere gidiyor ve segmentation fault (core dumped)
		//hatasi aliyorum. Bu yuzden number i kontrol ettirdim listede var mi yok mu diye.
		if (temp3->number == a)
			b++;
		temp3 = temp3->next;
	}
	if (b == 0) {
		printf("%d Student's Number Doesn't Exist.\n", a);
		return;
	}
	b = 0; //her ihtimale karsi...
	temp1 = head;
	temp2 = head->next;
	while (temp1 != NULL) {  //bastakini silme
		if (a == head->number) {
			b++;
			head = head->next;
			head->prev = NULL;
			free(temp1);
			break;

		} else if (temp1->next->number == a) { //Digerlerini silme
			b++;
			temp1->next = temp2->next;
			if (temp2->next != NULL)
				temp2->next->prev = temp1;

			free(temp2);
			break;
		}

		temp1 = temp1->next;
		temp2 = temp2->next;

	}
	if (b != 0)
		printf("Mission Accomplised.\n");

	temp3 = head;
	count = 0;

	while (temp3 != NULL) {
		count++;
		temp3->count = count;
		temp3 = temp3->next;

	}
}

void FindStudentNumber() {
	node *temp1;
	temp1 = head;
	int a;
	int b = 0;
	int c = 0;
	printf("Please Enter That You Want To Find Student's Number : ");
	scanf("%d", &a);
	while (temp1 != NULL) {
		if (temp1->number == a) {
			printf(
					"Count : %d\nNumber : %d\nCourseId : %d\nVize : %.2lf\nFinal : %.2lf\nButunleme : %.2lf\n",
					temp1->count, temp1->number, temp1->courseid, temp1->vize,
					temp1->final, temp1->butunleme);
			b++;
		}
		temp1 = temp1->next;
	}
	if (b == 0) {
		printf("%d Student's Number Doesn't Exist.\n", a);
		return;
	}
	printf("Do You Want To Change Anything of This Student ? (1 / 0)\n");
	scanf("%d", &c);
	temp1 = head;
	if (c == 1) {
		while (temp1 != NULL) {
			if (temp1->number == a) {
				printf("Enter Student Number : ");
				scanf("%d", &temp1->number);
				printf("Enter CourseId : ");
				scanf("%d", &temp1->courseid);
				printf("Enter Student's Vize : ");
				scanf("%lf", &temp1->vize);
				printf("Enter Student's Final : ");
				scanf("%lf", &temp1->final);
				printf("Enter Student's Butunleme : ");
				scanf("%lf", &temp1->butunleme);
				b++;
			}
			temp1 = temp1->next;
		}

	} else if (c == 0) {
		while (temp1 != NULL) {
			if (temp1->number == a) {
				printf(
						"Count : %d\nNumber : %d\nCourseId : %d\nVize : %.2lf\nFinal : %.2lf\nButunleme : %.2lf\n",
						temp1->count, temp1->number, temp1->courseid,
						temp1->vize, temp1->final, temp1->butunleme);
				b++;
			}
			temp1 = temp1->next;
		}
	}
	if (c != 1 && c != 0) {
		printf("Please Enter Correct Number!\n");
		return;
	}
	if (b != 0)
		printf("Mission Accoplised.\n");

}

void FindNumberofStudent() { //aslinda buradaki islemler yerine sadece globaldeki count u dondursem veya yazdirsam ayni sey olur
	//count zaten ogrenci sayisina esit.buradaki islem kalsin mantigi kavramak icin...
	node *temp1;
	int sayac = 0;
	temp1 = head;
	while (temp1 != NULL) {
		sayac++;
		temp1 = temp1->next;
	}
	printf("Number of Student : %d\n", sayac);
	//printf("Number of Student : %d\n", count);
}

void FindAverageFinal() {
	node *temp1;
	double ortalama;
	double toplam = 0;
	temp1 = head;
	while (temp1 != NULL) {
		toplam = toplam + temp1->final;
		temp1 = temp1->next;
	}
	ortalama = toplam / count;	//globaldeki count toplam ogrenci sayisidir.
	printf("Final Avarage of Students : %.2lf\n", ortalama);
}
int main() {
	int a;

	while (1) {
		printf(
				"1-)Create List\n2-)DisplayList\n3-)Insert List\n4-)Delete List\n5-)Find Student and Update If You Want (Number)\n"
						"6-)Find Number of Student\n7-)Find Average Final\n8-)Exit\n");
		scanf("%d", &a);

		switch (a) {
		case 1:
			CreateList();
			break;
		case 2:
			DisplayList();
			break;
		case 3:
			InsertList();
			break;
		case 4:
			DeleteList();
			break;
		case 5:
			FindStudentNumber();
			break;
		case 6:
			FindNumberofStudent();
			break;
		case 7:
			FindAverageFinal();
			break;
		case 8:
			exit(0);
			break;
		default:
			exit(0);
			break;
		}
	}
	return 0;
}

//system() 		is a call to the OS command line, "cls" is a command on some operating systems that clears the screen.
//system("cls"); (Windows Kullaniyorsan)
//system("clear"); (Linux Kullaniyorsan da boyle cunku terminalde ekrani silme komutu "clear" ve de bu kodun bulundugu dosyayi
//terminalde calistirman lazim system() fonksiyonunu
//linux ta kullanmak istiyorsan....
