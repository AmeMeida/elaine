#include <stdio.h>

int main (void) {
    const int SIZEOFSTRING=50, SIZEOFARRAY=5, QNTALUNOS=5; 

    typedef struct {
        char nome[SIZEOFSTRING], email[SIZEOFSTRING];
        float notas[SIZEOFARRAY], media; 
    } aluno; 

    aluno alunos[QNTALUNOS]; 

    for (int count = 0; count < QNTALUNOS; count++) {
        setbuf (stdin, NULL); 
        printf ("\n\nInsira o nome do aluno:  "); 
        fgets (alunos[count].nome, SIZEOFSTRING, stdin); 
        printf ("Insira o email do aluno:  "); 
        fgets (alunos[count].email, SIZEOFSTRING, stdin);
        alunos[count].media = 0; 

        for (int count2 = 0; count2 < SIZEOFARRAY; count2++) {
            printf ("Insira a %dº nota do aluno %d:  ", count2+1, count+1);
            scanf ("%f", &alunos[count].notas[count2]); 
            alunos[count].media += alunos[count].notas[count2];
        }
        alunos[count].media /= SIZEOFARRAY;         
    }

    for (int count = 0; count < QNTALUNOS; count++) {
        printf ("\n\n\tALUNO %d\nNome:  %sEmail:  %sMédia:  %.2f\n", count+1, alunos[count].nome, alunos[count].email, alunos[count].media);
    }

    return 0;
}