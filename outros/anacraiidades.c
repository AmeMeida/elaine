#include <stdio.h>
#include <stdlib.h>

int main(void)
{


    int idade=1, id21=0, id50=0;

    do {

     printf("Digite a sua idade");
     scanf("%d", &idade);
     if (idade==0) {
         break;
     }

     if(idade<21) {
     id21++;
     }

     if(idade>50) {
     id50++;
     }

    } while(idade>0);
        
      printf("Quantidade de pessoas com menos de 21 anos: %d\n", id21);
      printf("Quantidade de pessoas com mais de 50 anos: %d", id50);

      return 0;
   
}
