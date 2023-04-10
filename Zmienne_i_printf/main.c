/*
Zmienne i printf
Program oblicza obw�d i pole ko�a
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Definicja zmiennych u�wyanych w programie

    float promien,pi,obwod,pole;

    setlocale(LC_ALL,"");

    printf("Obliczanie obwodu i pola ko�a o zadanym promieniu\n"
           "-------------------------------------------------\n\n");

    //Zmiennym nadajemy watro�ci pocz�tkowe, nazywa si� to inicjalizacj�

    pi = 3.14159265;
    promien = 22.7;

    //Obliczenia

    obwod = 2*pi*promien;
    pole = pi*promien*promien;

    //Wypisujemy wyniki

    printf("Promien : %8.2f\n"
           "Obw�d   : %8.2f\n"
           "Pole    : %8.2f\n"
           "Dzi�kuje i zapraszam ponownie \n\n", promien, obwod, pole);


    return 0;
}
