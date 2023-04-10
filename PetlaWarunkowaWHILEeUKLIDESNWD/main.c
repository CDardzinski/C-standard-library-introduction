/*
Pêtla warunkowa while
Szukanie najwiêkszego wspólnego dzielnika algorytmem Euklidesa
NWD
Przyk³ad z neta
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a = 40; //liczba naturalna
    int b = 24; //liczba naturalna

    setlocale(LC_ALL,"");

    printf("NWD(%d,%d)= ", a, b);

    while (a != b) if (a > b) a -= b; //-= ten operator oznacza, odejmij i przenieœ do a odjêt¹ wartoœæ z b
    else b -= a;
    printf("%d\n", a);

    return 0;

}
