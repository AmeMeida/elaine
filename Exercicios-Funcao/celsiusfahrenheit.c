#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char input;
float celsiusToFahrenheit(), fahrenheitToCelsius(), graus;
void readTemperature(), selOption();

int main(void) {
    selOption(); 
    readTemperature();
    printf ("\nGraus celsius:  %.2f\nGraus fahrenheit:  %.2f\n", fahrenheitToCelsius(), celsiusToFahrenheit());
    return 0;
}

void selOption() {
    setbuf (stdin, NULL);
    while (input != 'f' && input != 'c') {
        printf ("Deseja fazer a conversão para farenheit ou celsius? (f/c):  "); 
        input = tolower(getchar());
    } 
}

void readTemperature() {
    if (input == 'f') {
        printf ("Digite o valor em celsius:  "); 
    } else if (input == 'c') {
        printf ("Digite o valor em fahrenheit:  ");
    }
    scanf ("%f", &graus); 
}

float celsiusToFahrenheit() {
    if (input == 'c') {
        return graus;
    } else return (graus*1.8)+32;
}

float fahrenheitToCelsius() {
    if (input == 'f') {
        return graus;
    } else return (graus-32)/1.8;
}