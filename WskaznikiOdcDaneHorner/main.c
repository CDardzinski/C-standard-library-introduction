/*
Wska¿niki
Schemat dzia³ania metody Hornera
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){


    char *p,bufor[11];
    unsigned w = 0;

    setlocale(LC_ALL, "");

    printf("DEC (0 ... 4294967295)  : ");
    scanf("%10s", bufor);

    for(p = bufor; *p; p++){

        w *= 10;
        w += *p - '0';
    }
    printf("\nLiczba = %u\n\n", w);

    return 0;
}
