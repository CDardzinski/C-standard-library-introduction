/*
Wska¿niki
Schemat dzia³ania metody Hornera dla liczb ósemkowych
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){


    char *p,bufor[12];
    unsigned w = 0;

    setlocale(LC_ALL, "");

    printf("OCT (0 ... 37777777777)  : ");
    scanf("%11s", bufor);

    for(p = bufor; *p; p++){

        w *= 8;  //podstawa równa 8!!!
        w += *p - '0';
    }
    printf("\nLiczba = %u\n\n", w);

    return 0;
}
