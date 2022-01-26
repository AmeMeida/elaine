#include <stdio.h>

int main (void) {
	int idade, maiorIdade=0;

	printf ("Digite uma idade: (O para interromper)  "); 

	do {
		scanf ("%d", &idade);

		if (idade > maiorIdade) {
			maiorIdade = idade;
		}
	} while (idade != 0); 

printf ("A maior idade apresentada foi %d", maiorIdade);

setbuf (stdin, NULL); 
char a = getchar (); 

return 0; 
}
