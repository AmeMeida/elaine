#include <stdio.h>
#include <locale.h>

int main(void) {

  setlocale(LC_ALL,"");

  char aluno[40];
  int nota1,nota2,nota3,media;

  printf ("Digite o nome do aluno:  ");
    fgets (aluno,40,stdin);
    setbuf (stdin,NULL);

  printf ("Digite sua primeira nota:  ");
    scanf ("%d", &nota1);

  printf ("Digite sua segunda nota:  ");
    scanf ("%d", &nota2);

  printf ("Digite a terceira nota:  ");
    scanf ("%d", &nota3);

  media = (nota1+nota2+nota3)/3;

  printf ("\nAluno: %s\nMédia:  %d", aluno, media);

return 0;
}