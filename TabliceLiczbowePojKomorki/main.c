/*
Tablice liczbowe
Wy�wietlanie komorka po kom�rce
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a[] = {6,7,2,8,1,4,3,0,0,5}; //10 liczby, kom�tki od a[0] ... [9]
    int i;

    setlocale(LC_ALL, "");

    printf("Kom�rka a0 tablicy = %d\n", a[0]);
    printf("Kom�rka a1 tablicy = %d\n", a[1]);
    printf("Kom�rka a9 tablicy = %d\n", a[9]);
    printf("Kom�rka a10 tablicy = %d\n", a[10]);    //co� wypisuje, ale na pewno nie warto�� z tablicy

    printf("NORMALNIE:\t");
    for(i = 0; i < 10; i++) printf("%3d", a[i]);

    printf("\n\nWSPAK: \t\t");
    for(i = 9; i >= 0; i--) printf("%3d", a[i]);

    printf("\n\n");

    return 0;
}
