#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void) {
  setlocale(LC_ALL,"");

  int ra;
  float media, prova1, prova2;
  char nomedisc[40], nome[40], genero;

  printf ("Digite o nome da matéria: ");
    gets (nomedisc);
    setbuf (stdin,NULL);

  printf ("Digite a sua nota da primeira prova:  ");
    scanf ("%2f", &prova1);
    setbuf (stdin,NULL);

  printf ("Digite a sua nota da segunda prova:  ");
    scanf ("%2f", &prova2);
    setbuf (stdin,NULL);

    printf ("Digite seu nome:  ");
      gets (nome);
      setbuf (stdin,NULL);

    printf ("Digite seu RA:  ");
    scanf ("%6d", &ra);
    setbuf (stdin,NULL);

  printf ("Digite seu gênero (m/f):  ");
    scanf ("%c", &genero);
    setbuf (stdin,NULL);


  genero = toupper(genero);
  media = (prova1+prova2)/2;

  if ((prova1<=10) && (prova1>=0) && (prova2<=10) && (prova2>=0))

    {printf("\nNome:  %s\nGênero:  %c\n\nNome da matéria:  %s\nRA:  %d\nProva1:  %.2f\nProva2:  %.2f\nMédia:  %f\n\n", nome, genero, nomedisc, ra, prova1, prova2, media);}

    else {printf("\nnotas incorretamente enviadas\n\n");};


}
