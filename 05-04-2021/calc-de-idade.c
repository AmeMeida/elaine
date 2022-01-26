#include <stdio.h>
#include <locale.h>

int main(void) {

  setlocale(LC_ALL,"");

  int diaat,mesat,anoat,qntdiaat,dia,mes,ano,qntdia,idade;

  printf ("Digite o ano atual:  ");
    scanf ("%d", &anoat);
    anoat = anoat-1;

  printf ("Digite o mês atual:  ");
    scanf ("%d", &mesat);
    mesat = mesat-1;

  printf ("Digite o dia atual:  ");
    scanf ("%d", &diaat);

  printf ("Digite o ano do seu nascimento:  ");
    scanf ("%d", &ano);
    ano = ano-1;

  printf ("Digite o mês do seu nascimento:  ");
    scanf ("%d", &mes);
    mes = mes-1;

  printf ("Digite o dia do seu nascimento:  ");
    scanf ("%d", &dia);

  qntdiaat = (anoat*365)+(mesat*30)+diaat;

  qntdia = (ano*365)+(mes*30)+dia;
  qntdia = qntdiaat-qntdia;

  printf ("Dias:  %d\nIdade:  %d\nHoras:  %d\nMinutos:  %d\nSegundos:  %d", qntdia,qntdia/365, qntdia*24, qntdia*1440, qntdia*86400);

return 0;
}