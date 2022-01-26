#include <stdio.h>

int main (void) {

	float preco, total = 0;
	int count; 

	printf ("Deseja informar o valor de quantas garrafas?  "); 
	scanf ("%d", &count); 

	for (; count > 0; count--) {

		printf ("\nInforme o valor da compra da garrafa:  "); 
		scanf ("%f", &preco);

		if (preco <= 100) {
			preco += 50;
			printf ("A garrafa irá custar %.2f\n", preco); 
		} else if (preco > 100) {
			preco += 30;
			printf ("A garrafa irá custar %.2f\n", preco);
		}  

		total += preco;
	}

	setbuf (stdin, NULL); 
	
	printf ("\nO valor total será de %.2f.", total);
	char a = getchar();

	return 0; 

}

	


