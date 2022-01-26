#include <stdio.h>
#include <locale.h>

int main(void) {

  setlocale(LC_ALL,"");

  float renda, despesa;

  printf("Digite a renda anual da empresa:  ");
    scanf ("%f", &renda);

  printf ("Digite a despesa anual da empresa:  ");
    scanf ("%f", &despesa);

  printf ("O lucro anual da empresa é %.2f", renda-despesa);  
  
  return 0;
}