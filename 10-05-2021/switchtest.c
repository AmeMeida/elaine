#include <stdio.h>

int main (void) 


{
	int controle;

	printf ("Selecione a opção: (1 a 7)");
	scanf ("%d", &controle);
	
	switch(controle)

  {
  	case 1: printf ("Domingo");
  		break;
  	case 2: printf ("Segunda");
  		break;
  	case 3: printf ("Terça");
  		break;
  	case 4: printf ("Quarta");
  		break;
  	case 5: printf ("Quinta");
  		break;
  	case 6: printf ("Sexta");
  		break;
  	case 7: printf ("Sábado");
  		break;
  	case 11: printf ("DIA 11 DIA 11 DIA 11 DIA 11");
  		break;

  	default: printf ("Não.");
  }

	return 0;
}