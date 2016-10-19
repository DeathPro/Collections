#include <stdio.h>

int binarySearch(int sayi[20], int find, int left, int right)
{
	int mid;

	while (left<=right)
	{
		mid = (left + right) / 2;
		if (sayi[mid] == find)
			return mid;
		else if (find > sayi[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}

int main()
{
	int sayi[20] = { 1,3,5,7,8,10,11 };
	int left,right,find;
	int i;
	left = 0;
	for (i = 0; sayi[i] != NULL; i++)
		
		right = i;
	//printf("%d\n", right);
	printf("Bulmak Istediginiz Sayiyi Giriniz: ");
	scanf("%d", &find);
	printf("Bulmak Istediginiz Sayinin Indexi(-1 Ise Yok Demektir): %d", binarySearch(sayi, find, left, right));

	getch();
	return 0;
}