/*
Wska�niki
Schemat dzia�ania metody Hornera dla liczb dw�jkowych
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){


    char *p,bufor[33];
    unsigned w = 0;

    setlocale(LC_ALL, "");

    printf("BIN (0 ... 111111111111111111111111111111111)  : ");
    scanf("%32s", bufor);

    for(p = bufor; *p; p++){

        w *= w;  //podstawa r�wna 2!!!
        w += *p - '0';
    }
    printf("\nLiczba = %u\n\n", w);

    return 0;
}
