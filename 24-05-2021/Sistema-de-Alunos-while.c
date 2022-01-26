#include <stdio.h>
#include <locale.h>

int main(void) {

  int ra=1, nota1, nota2, turmaMedia, count;
  char nome[40];

  //RA
  printf ("Digite o RA do aluno:  ");
  scanf ("%d", &ra);
  setbuf (stdin, NULL);

  for (count=0; ra != 0; count++)
   {
     //Nome do aluno
     printf ("Digite o nome do aluno:  ");
     fgets ( nome, 40, stdin);
     setbuf (stdin, NULL);

    //Notas
    printf ("Digite a primeira nota:  ");
    scanf ("%d", &nota1);

    printf ("Digite a segunda nota:  ");
    scanf ("%d", &nota2);

    setbuf (stdin, NULL);

    //Ficha do aluno
    printf ("\nNome do aluno:  %sRA:  %d\nMédia:  %d", nome, ra, (nota1+nota2)/2);

    //RA
    printf ("\n\nCaso deseje continuar, insira o RA do aluno (insira 0 para terminar):  ");
    scanf ("%d", &ra);
    setbuf (stdin, NULL);

    //Calculo da media
    turmaMedia += (nota1 + nota2)/2; 
   }

   printf ("%d", count);

   turmaMedia /= count;
   printf ("\nInformações da turma:  \n\nAlunos: %d\nMédia:  %d", count, turmaMedia);

  return 0;
}
