#include <stdio.h>
#include <locale.h>

int main(void) {

  int num=0, count=0, fatorial=1; 
  setlocale (LC_ALL, "Portuguese");

  printf ("Digite um número:  ");

  do
   {
     scanf ("%d", &num);
     setbuf (stdin, NULL);
   } while (num<=0);

  do
   {
     count++; 
     fatorial *= count;
     printf ("\n%d -> %d", count, fatorial);
   } while (count<num);


  printf("\n\nO fatorial de %d é %d.\n", num, fatorial);

  return 0;
}
