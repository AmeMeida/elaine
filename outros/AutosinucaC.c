#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int ball1,ball2;
  char player1 [30], player2 [30];

  printf ("Digite o nome do primeiro jogador:  ");
      fgets(player1,30,stdin) ;
      setbuf(stdin, NULL);

  printf ("Digite o nome do segundo jogado´r:   ");
      fgets(player2,30,stdin) ;
      setbuf(stdin, NULL);´´

  printf ("Digite a quantidade de bolas derrubadas por %s:  ", player1);
      scanf ("%d", &ball1);
      setbuf(stdin, NULL);

  printf ("Digite a quantidade de bolas derrubadas por %s:  ", player2);
      scanf ("%d", &ball2);
      setbuf(stdin, NULL);

  if ((ball1>=0) && (ball1<=15) && (ball2>=0) && (ball2<=15) && (ball1+ball2==15))

   {if (ball1>ball2)
       {printf("\n%sganhou!\n", player1);}

     else
       {printf("\n%sganhou!\n", player2);}}

   else
    {printf ("Os números não correspondem.");}

return 0;
}
