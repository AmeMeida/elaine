#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()

{

	// Aluno: Pedro Augusto Lopes de Oliveira
	//	RA: 201290
	// Turma: 1ºDSD

	double num1, num2;
	char option;

	setlocale (LC_ALL, "Portuguese");

	printf ("Calculadora.\n\nInsira o primeiro número:  ");
	scanf ("%lf", &num1);
	setbuf (stdin, NULL);

	printf ("\nSelecione a operação desejada:  \nSoma - +\nSubtração - -\nMultiplicação - *\nDivisão - /\nQuadrado - q\nRaiz quadrada - r\n\nOpção:  ");
		scanf (" %c", &option);
	
	switch (option)

	 {
	 	 case '+':
	       printf ("Digite o segundo número:  ");
	       scanf ("%lf", &num2);

	       printf ("%lf + %lf = %lf", num1, num2, num1+num2);
 
   	   break;

	 	 case '-':
	       printf ("Digite o segundo número:  ");
	       scanf ("%lf", &num2);

	       printf ("%lf - %lf = %lf", num1, num2, num1-num2);

	      break;

	    case '*':
	       printf ("Digite o segundo número:  ");
	       scanf ("%lf", &num2);
 
	       printf ("%lf * %lf = %lf", num1, num2, num1*num2);

	      break;

	 	 case '/':
	       
	 	 	 if (num2 != 0)
	 	 	    {
	            printf ("Digite o segundo número:  ");
	            scanf ("%lf", &num2);

	            printf ("%lf / %lf = %lf", num1, num2, num1/num2);
	          } else {printf ("Número inválido.");}

	      break;

	    case 'q':
	       printf("O quadrado de %lf é %lf", num1, num1*num1);

	      break;

	    case 'r':
	    	 if (num1>0)
	      	 {
	            printf ("A raiz de %lf é %lf", num1, sqrt(num1));
	          } else {printf ("Número inválido.");}

	      break;

	    default: printf ("Insira uma opção válida.");
	 }



    return 0;
}
