/*
Tablice
Sumowanie elementów tablicy
Przyk³ad 1, u¿ycie typowego algorytmu
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int t[] = {6, -5, 3, 12, 2-5, 8, -22, 9, 0}; //przyk³adowa tablica do sumowania
    int suma = 0;
    int i;

    setlocale(LC_ALL, "");

    for (i = 0; t[i]; i++) suma += t[i];
    printf("Suma tablicy wynosi: %d\n\n", suma);

    return 0;
}
