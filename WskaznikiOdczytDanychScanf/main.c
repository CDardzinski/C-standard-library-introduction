/*
Wskazniki
Uzycie funkcji odczytu danych scanf
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float r, p, o, pi = 3.1415906535;

    setlocale(LC_ALL, "");

    printf("Obliczanie pola i obwodu ko�a\n"
           "------------------------------\n\n");
    printf("Podaj r = ");
    scanf("%f", &r); //odczytujemy (wk�adamy) promie� do zmiennej r
    p = pi * r * r; //obliczamy pole ko�a
    o = 2 * pi * r; //obliczamy pole ko�a
    printf("\n");
    printf("Pole  = %9.2f\n"
           "Obw�d = %9.2f\n\n", p, p);

    return 0;


}
