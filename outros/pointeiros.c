#include <stdio.h>
#include <stdlib.h>

int funcaoDaMika (int *jesus, int *maizi) {
    printf ("%d, %d\n", *jesus, *maizi); 
}

void loanna (float *valorSoma, float *valorMultiplicacao, float *valorDivisao, float *valorSubtracao, int robson, int mika) {
    (*valorSoma)=robson+mika; 
    (*valorMultiplicacao)=robson*mika;
    (*valorDivisao)=robson/mika;
    (*valorSubtracao)=robson-mika;
}

int main (void) {
    int mika;
    int heitor; 
    int gab; 
    float newso; 
    int *monitorHeitor; 
    int *monitorMika;
    float soma, multiplicacao, divisao, subtracao;

    scanf("%d", &heitor);
    scanf("%d", &mika);

    loanna(&soma, &multiplicacao, &divisao, &subtracao, heitor, mika);

    printf("\n\n\nSoma: %.2f\nMultiplicação: %.2f\nDivisão: %.2f\nSubtração: %.2f\n\n", soma, multiplicacao, divisao, subtracao);
    
    monitorHeitor=&heitor;
    monitorMika=&mika; 
    
    gab=(*monitorMika)+(*monitorHeitor);

    printf ("%d, %d\n", *monitorHeitor, *monitorMika);

    (*monitorHeitor)=30;

    printf("%d\n", heitor);
}