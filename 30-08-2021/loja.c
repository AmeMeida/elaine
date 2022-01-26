#include <stdio.h>

int main (void) {
    const float COMISSAOTAXA = 10; 
    const int NAMESIZE = 50;

    //Criação da estrutura "vendedor"
    typedef struct {
        char nome[NAMESIZE];
        int matricula; 
        float venda, comissao;
    } vendedor; 

    //Variável do vendedoren
    vendedor vendedor1;

    printf("Digite o nome do vendedor:  "); 
    fgets(vendedor1.nome, NAMESIZE, stdin);
    printf ("Digite o número de matrícula do funcionário:  "); 
    scanf ("%d", &vendedor1.matricula);
    printf ("Digite o valor equivalente as vendas do funcionário nesse mês:  ");
    scanf ("%f", &vendedor1.venda); 

    //Cálculo da taxa de comissão
    if (vendedor1.venda>5000) {
        vendedor1.comissao = vendedor1.venda * (COMISSAOTAXA/100);
    } else {
        vendedor1.comissao = 0;
    }

    //Impressão dos dados 
    printf ("Nome do vendedor:  %sCódigo do vendedor:  %d\nValor das vendas no mês:  R$%.2f\nComissão:  R$%.2f\n\n", vendedor1.nome, vendedor1.matricula, vendedor1.venda, vendedor1.comissao);
    return 0;
}