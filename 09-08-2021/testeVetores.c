#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int limite, count, input; 
	printf ("Digite o limite de valores da variável:  ");
	scanf ("%d", &limite);

	int vetor[limite]; 

	while (count != 40) {
		printf ("Deseja sobreescrever o valor de qual posição?  "); 
		scanf ("%d", &count);

		printf ("\nDigite o valor a ser sobreescrito na posição %d:  ", count); 
		scanf ("%d", &input);

		vetor[count]=input;
	}

	for (count = 0; count > limite; count++) {
		printf ("%d", vetor[count]);
	}
	
	char a = getchar ();
	return 0;
}
	
