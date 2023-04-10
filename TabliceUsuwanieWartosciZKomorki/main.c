/*
Tablice
Usuwanie wartoœci z wybranej komórki i przesuwanie
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int n = 10; //liczba elementów
    int t[] = {6, -4, 3, 11, 2, 999, 8, -20, 9, 1}; //tablica do przeszuknia
    int i;
    int p = 5; //pozycja do usuniêcia

    setlocale(LC_ALL, "");

    printf("Przed: \n");
    for(i = 0; i < n; i++) printf("t[%d] = %4d\n", i, t[i]);

    //usuwamy element

    for(i = p + 1; i < n; i++) t[i - 1] = t[i];
    t[n - 1] = 0;

    printf("\nPo: \n");
    for(i = 0; i < n; i++) printf("t[%d] = %4d\n", i, t[i]);
    printf("\n\n");

    return 0;

}
