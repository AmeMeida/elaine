#include <stdio.h>
#include <ctype.h>

int main (void) {
    const int QNTHABITANTES = 3;
    float mediaSalario=0, mediaFilhos=0;

    typedef struct {
        int idade, filhos; 
        float salario;        
        char sexo; 
    } ficha; 

    ficha senso[QNTHABITANTES]; 

    for (int count = 0; count < QNTHABITANTES; count++) {
        printf ("\nDigite a idade:  ");
        scanf ("%d", &senso[count].idade); 
        printf ("Digite a quantidade de filhos:  ");
        scanf ("%d", &senso[count].filhos);
        printf ("Digite o salário:  "); 
        scanf ("%f", &senso[count].salario);
        do {
            setbuf (stdin, NULL);
            printf ("Insira o gênero(m/f):  ");
            senso[count].sexo=tolower(getchar());
        } while (senso[count].sexo != 'm' && senso[count].sexo != 'f');

        mediaFilhos+=senso[count].filhos;
        mediaSalario+=senso[count].salario; 
    }

    mediaFilhos /= QNTHABITANTES;
    mediaSalario /= QNTHABITANTES;

    printf ("Quantidade de habitantes cadastrados:  %d\nMédia de salário:  %.2f\nMédia de filhos:  %.2f\n", QNTHABITANTES, mediaSalario, mediaFilhos);
    return 0;
}