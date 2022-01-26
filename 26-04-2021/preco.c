#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale (LC_ALL, "");
  
  float preco;
  int parcela, modopag;
  char a;

  printf ("Por favor, informe o valor do produto:  ");
  scanf ("%f", &preco);
  setbuf (stdin, NULL);

  printf ("Informe o método de pagamento \n[1]Parcelado\n[2]À vista\n");
  scanf ("%d", &modopag);

  if (modopag == 1)
    {
      printf ("Informe a quantidade de parcelas:  ");
      scanf ("%d", &parcela);

      printf ("\nO valor  a ser pago será %.2f.\n",preco / parcela);

    } else if (modopag == 2)
      {
        printf ("Você irá pagar R$%.2f, e teve um desconto de %.2f!\n", preco - (preco * 0.1), preco * 0.1);
      }

  setbuf (stdin, NULL);

  printf ("Pressione qualquer tecla para continuar. ");

  a = getchar();

  return 0;
}
