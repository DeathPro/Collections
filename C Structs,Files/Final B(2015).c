#include <stdio.h>

char* fonksiyon(char *s1, char *s2, int n)
{
	int k = 0;
	char *temp = s1;
	while (*s1 != '\0')
		s1++;
	for (k = 0; k < n && s2[k] != '\0'; k++)
		*s1++ = *s2++;
	*s1 = '\0';
	return temp;
}

int main()
{
	char s1[20] = "Gok";
	char *s2 = "ay karanlik";
	fonksiyon(s1, s2, 2);
	printf("\n%s", s1);
	getch();
	return 0;
}