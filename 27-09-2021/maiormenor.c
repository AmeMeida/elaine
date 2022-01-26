#include <stdio.h>
#include <stdlib.h>

void verificador(int *pnum1, int *pnum2) {
    int temp;
    if (*pnum1<*pnum2) {
        temp=*pnum1;
        *pnum1=*pnum2;
        *pnum2=temp;
    }
}

int main (void) {
    int num1, num2;
    printf ("Insira dois números:  ");
    scanf ("%d %d", &num1, &num2);

    verificador(&num1, &num2);

    printf ("Número maior:  %d\nNúmero menor:  %d", num1, num2);
    return 0;
}