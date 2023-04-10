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

    printf("Obliczanie pola i obwodu ko³a\n"
           "------------------------------\n\n");
    printf("Podaj r = ");
    scanf("%f", &r); //odczytujemy (wk³adamy) promieñ do zmiennej r
    p = pi * r * r; //obliczamy pole ko³a
    o = 2 * pi * r; //obliczamy pole ko³a
    printf("\n");
    printf("Pole  = %9.2f\n"
           "Obwód = %9.2f\n\n", p, p);

    return 0;


}
