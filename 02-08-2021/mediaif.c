# include <stdio.h>

int main (void) {

	float nota1, nota2;

	printf ("Digite a primeira nota:  ");
		scanf ("%f", &nota1);

	printf ("Digite a segunda nota:  ");
		scanf ("%f", &nota2);
	setbuf (stdin, NULL);

	printf ("\nSua média é:  %.2f\n", (nota1+nota2)/2);

	if ((nota1+nota2)/2<6) {
		printf ("Situação: Reprovado");
	} else {
		printf ("Situação: Aprovado");
	}

	int a = getchar();

	return 0;

}

