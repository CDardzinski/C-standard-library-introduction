/*
Tablice liczbowe
Wyœwietlanie komorka po komórce
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a[] = {6,7,2,8,1,4,3,0,0,5}; //10 liczby, komótki od a[0] ... [9]
    int i;

    setlocale(LC_ALL, "");

    printf("Komórka a0 tablicy = %d\n", a[0]);
    printf("Komórka a1 tablicy = %d\n", a[1]);
    printf("Komórka a9 tablicy = %d\n", a[9]);
    printf("Komórka a10 tablicy = %d\n", a[10]);    //coœ wypisuje, ale na pewno nie wartoœæ z tablicy

    printf("NORMALNIE:\t");
    for(i = 0; i < 10; i++) printf("%3d", a[i]);

    printf("\n\nWSPAK: \t\t");
    for(i = 9; i >= 0; i--) printf("%3d", a[i]);

    printf("\n\n");

    return 0;
}
