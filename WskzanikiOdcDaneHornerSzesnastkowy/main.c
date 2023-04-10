/*
Wska¿niki
Schemat dzia³ania metody Hornera dla liczb szesnastkowych
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){


    char *p,c,bufor[9];
    unsigned w = 0;

    setlocale(LC_ALL, "");

    printf("HEX (0 ... FFFFFFFF)  : ");
    scanf("%8s", bufor);

    for(p = bufor; *p; p++){

        w *= 16;  //podstawa równa 16!!!
        c = *p - '0';
        if(c > 9) c -= 7;
        if(c > 15) c -= 32;
        w += c;
    }
    printf("\nLiczba = %u\n\n", w);

    return 0;
}
