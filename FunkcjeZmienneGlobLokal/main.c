/*
Funkcje
Zmienne globalne i lokalne
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void fxxx(){ //jakaœ funkcja

    int a = 10;

    printf("W funkcji fxxx a = %d\n\n", a);
    //Jeœli funkcja jest typu void
    //return nie jest potrzebne
}

int main()
{

    int a = 99;

    setlocale(LC_ALL, "");

    printf("W funkcji main a = %d\n\n", a);
    fxxx();

    printf("W funkcji main a = %d\n\n", a);

    return 0;
}
