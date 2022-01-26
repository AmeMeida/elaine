#include <stdio.h>

int main (void) {

	float peso, altura, imc;

	printf ("Digite seu peso:  ");
	scanf ("%f", &peso); 
	printf ("Digite sua altura  ");
	scanf ("%f", &altura);

	imc = peso / altura * altura;

	printf ("Seu imc é:  %.2f", imc);

	if (imc<=30) {
		printf ("\nSeu peso está normal.");
	} else if (imc>30) {
		printf ("\nVocê está acima do peso.");
	}
	
	setbuf (stdin, NULL);
	char a = getchar();

	return 0;
}



