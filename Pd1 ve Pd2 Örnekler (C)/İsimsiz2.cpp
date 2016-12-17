#include<stdio.h>

int main (void)
{
  unsigned char i;
  while ((i = getchar()) != EOF) 
      printf("%c\n", i);

  return 0;
}
