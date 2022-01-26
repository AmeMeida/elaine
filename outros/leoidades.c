#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Id,Nu21=0,Nu50=0;
    do {
    printf("Digite sua idade\n");

    scanf("%d",&Id);
    if (Id==0)

    {
        printf("0 Não é uma idade valida\n");
        break;
    }
    if (Id<21) {
        Nu21++;
    }

    if (Id>50) {
        Nu50++;
    }

    } while (Id!=0);

    printf ("Quantidade de pessoas com menos de 21 anos:  %d", Nu21);
    printf ("\nQuantidade de pessoas com mais de 50 anos: %d", Nu50);


    return 0;
}
