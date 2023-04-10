/*
Wska¿niki
Schemat dzia³ania metody Hornera dla liczb dwójkowych
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

        w *= w;  //podstawa równa 2!!!
        w += *p - '0';
    }
    printf("\nLiczba = %u\n\n", w);

    return 0;
}
