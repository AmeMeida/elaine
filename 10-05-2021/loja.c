#include <stdio.h>
#include <locale.h>
#include <ctype.h>


int main () 
{
	int parcela;
	float custo;
	char a, pagamento;

	setlocale (LC_ALL, "Portuguese");

	printf ("Digite o valor:  ");
	scanf ("%f", &custo);
	setbuf (stdin, NULL);


	printf ("\nForma de pagamento: \nÀ vista - V\nParcelado - P\nInsira a forma de pagamento desejada:  ");
	scanf ("%c", &pagamento);

	pagamento = toupper(pagamento);

	switch (pagamento)

	{
		case 'V': 
			printf ("Você irá pagar %.2f, e teve um desconto de %.2f!\n\n", custo-custo*0.1, custo*0.1);
			
			break;

		case 'P':
			printf ("\nInforme a quantidade de parcelas:  ");
			scanf ("%d", &parcela);

			printf ("Você irá pagar %d parcelas de %.2f.\n\n", parcela, custo/parcela);

			break;

			default: printf ("Insira uma opção válida.");
	}

	return 0;

}