/*
P�tla warunkowa while
Szukanie najwi�kszego wsp�lnego dzielnika algorytmem Euklidesa
NWD
Przyk�ad z neta
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a = 40; //liczba naturalna
    int b = 24; //liczba naturalna

    setlocale(LC_ALL,"");

    printf("NWD(%d,%d)= ", a, b);

    while (a != b) if (a > b) a -= b; //-= ten operator oznacza, odejmij i przenie� do a odj�t� warto�� z b
    else b -= a;
    printf("%d\n", a);

    return 0;

}
